#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include "reiki.h"
// #include "suara.h"

volatile bool play = false;
volatile uint8_t track = 0;
volatile uint16_t count = 0;

ISR(TIMER0_COMPA_vect){
  if (play){
    if (track == 0){
      OCR1A = ~pgm_read_byte(&reiki[count]); // Play track 0
      count++;
      if (count >= sizeof(reiki)){
        play = false;
        OCR1A=0;
      }
    }
    // else if (track == 1){
    //   OCR1A = ~pgm_read_byte(&akhir[count]); // Play track 1
    //   count++;
    //   if (count >= sizeof(akhir))
    //     play = false;
    // }
  }
}

void initPWM(void);
void TimerInit(void);

int main(void){
  DDRD |= _BV(DDD6); // Set PD6 (OC0A/OC1A) as output for PWM
  PORTD |= _BV(PORTD2) | _BV(PORTD3); // Enable pull-up resistors on PD2 and PD3

  initPWM();
  TimerInit();
  sei();

  while (1){
    if (!(PIND & _BV(PIND2)) && !play){ // PD2 as track 0 selector, detect LOW state
      _delay_ms(50); // Debounce delay
      if (!(PIND & _BV(PIND2))){ // Confirm button press
        play = true;
        track = 0;
        count = 0;
        while (!(PIND & _BV(PIND2))); // Wait for button release
      }
    }
    // else if (!(PIND & _BV(PIND3))){ // PD3 as track 1 selector
    //   play = true;
    //   track = 1;
    //   count = 0;
    // }
  }
}

void initPWM(){
  DDRB |= _BV(DDB1); // Set PB1 (OC1A) as output for PWM
  TCCR1A = _BV(WGM10) | _BV(COM1A1); // Fast PWM, 8-bit
  TCCR1B = _BV(WGM12) | _BV(CS10);   // Fast PWM, no prescaler
  OCR1A = 200;
}

void TimerInit(){
  TCCR0A = _BV(WGM01); // CTC mode
  TCCR0B = _BV(CS01);  // Prescaler 8
  OCR0A = 250;
  TIMSK0 |= _BV(OCIE0A); // Enable compare match interrupt
}
