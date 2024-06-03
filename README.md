![image](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/a5538c26-a112-4ee7-95ce-6a8f8d125481)
Pendeteksi level ketinggian banjir merupakan suatu perangkat yang nantinya digunakan untuk mengukur tingkat level bencana pada sebuah banjir. Dengan menggunakan rangkaian mikrokontroler AVR, output yang di keluarkan akan berformat MP4 dan output suara akan berbeda tergantung tiap tinggi rendahnya level bencana.

`WORKSHOP MIKROKONTROLLER - PROGRAM STUDI TEKNIK ELEKTRONIKA - POLITEKNIK ELEKTRONIKA NEGERI SURABAYA`

`DOSEN PENGAMPU : Akhmad Hendriawan ST, MT`
`NIP. 197501272002121003`

`TEAM`
| No.  | Nama  | NRP  | Pembagian Tugas  |
| :------------: | :------------: | :------------: | :------------: |
| 1  | Moch.Rizky Faturrohman  | 2122500003  | 3D design |
| 2  | Dimas Ramadhani | 2122500004  | Dokumentasi proyek dan pembuatan cover  |
| 3  |  Reiki Ridvan | 2122500015  |  Perancangan Program Untuk Arduino UNO |
| 4  |  Ahmad Rayhan Adhitama  |  2122500017 |  Melakukan proses soldering Komponen pada PCB |
| 5  |  Moch Reyhan Yudha Saputra | 2122500023  |  Publikasi Rancangan Alat Melalui Github, Desain Skematik dan Board PCB |
| 6  | Dwi Satrio Nugroho  |  2122500024 | Desain Skematik dan Board PCB, Proses soldering Komponen pada PCB |

## Daftar Isi
- [Komponen Yang Digunakan](#Komponen-Yang-Digunakan)
- [Blok Diagram](#Blok-Diagram)
- [Fitur](#Fitur)
- [Desain Rangkaian](#Desain-Rangkaian)
- [3D Design](#3D-Design)
- [PCB](#PCB)
- [Dokumentasi Proyek](#Dokumentasi-Proyek)

## Komponen Yang Digunakan
1. Arduino UNO R3
2. Water level sensor
3. Push Button
4. Speaker
5. Amplifier PAM8403 DC 5V

## Blok Diagram

![image](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/9fc287d7-da1b-4631-9973-f1dbf7c13ca8)
Pada alat pendeteksi banjir yang telah kita buat, memiliki prinsip kerja yiatu dimana kita disini menggunakna Arduino UNO sebagai mikrokontroler yang digunakan yang dimana akan disupply teganggan berupa battery. Pertama Water level sensor akan mulai membaca nilai, jika nilai yang dibaca pada Water level sensor bernilai lebih dari "1000" maka Speaker akan mulai mengeluarkan suara yang sudah di inputkan di arduino, output suara yang dihasilkan kurang lebih seperti alarm "Awas Ada Banjir" yang akan di suarakan melalui speaker yang telah dikuatkan menggunakna Amplifier 5V. Jika dirasa durasi Alarm terlalu lama sehingga membuat warga sekitar panik, maka alarm dapat dimatikan menggunakan push button yang berfungsi sebagai interrupt untuk menghentikan pembacaan Water level sensor
   
## Fitur
- Pembangkitan sinyal audio mikrokontroler AVR
- Push Button sebagai interuppt alarm audio
- Output audio sebagai alarm

## Desain Rangkaian
Berikut adalah skematik breadbord untuk simulasi menggunakan Wokwi yang menggunakan Arduino Uno
![image](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/429d990a-663b-4f07-827f-03e722ed1c1f)

## 3D Design
Berikut adalah hasil 3D Design menggunakan TinkerCad :

1. 3D Design konsep alat
   
    ![3D PNG](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/f4f3e932-139f-4a36-a8f4-e7678ca994f5)
   
2. 3D Design Package
   
   ![Package Arduino Uno (Image)](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/6660ee80-e628-46a9-b375-c5d34ba228a8)

3. Hasil cetak case arduino
![case arduino](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/134507164/493f49aa-e1bd-4d6e-9f28-29c037055429)

Berikut adalah tutorial dalam pembuatan desain case Arduino UNO menggunakan Thinkercad pada proyek ini. Bisa klik link [berikut.](https://youtu.be/i5TSe1QAH68?si=4G1KmNbXgsI5xHIV "berikut.")

## PCB
Berikut Program Design PCB yang telah dibuat :

1. Schematic

   ![Screenshot 2024-06-01 at 13-45-54 Projek Workshop Mikrokontroler - MIKRO SEM 4 pdf](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/e81f606b-a25d-4a9f-ab0b-812c4a2408cb)

2. Board

   ![image](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/fdde5403-41cc-42a4-b613-b2f43a9454df)

3. Design 3D

   ![image](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/0190db1c-7a44-452d-8bbd-456c053680f7)

4. Hasil Cetak PCB

   ![image](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/19f0b355-4497-4219-b260-32482fcb6d02)

Video Tutorial :Langkah - langkah pembuatan PCB

https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/134507164/7d09def3-0b46-4763-8496-2ca6ddae62d7


## Audio Project
Berikut hasil pembuatan audio dengan hasil editnya menggunakan software Audacity yang kemudian didapatkan file raw yang dibuka melalui software HxD untuk memperoleh datanya dan didapatkan program bahasa C. Program bahasa C tersebut digunakan untuk memrogram Arduino UNO agar audio berfungsi. Berikut hasil dokumentasinya :
![WhatsApp Image 2024-06-02 at 08 14 34](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/134507164/644f01c8-b334-415c-86fc-745844bdf75e)
![WhatsApp Image 2024-06-02 at 08 14 34 (1)](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/134507164/0f8a6fea-1c4b-452f-a618-0d534d24592f)

Video Tutorial : Langkah - Langkah Convert Audio Ke Bahasa C

   https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/134507164/44a9ac11-2886-480d-8157-06fb5abc79b8

## Dokumentasi Proyek
1. Pembuatan program dan simulasi rangkaian

   ![image](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/a0b6b4bc-1a25-4938-8b5a-6a98fafffdd8)

2. Pengetesan Water level sensor

   ![image](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/e96e6099-6b38-456c-8899-c28a4241bc82)

3. Pengetesan Speaker

   https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/ead18a85-f2a6-42ef-aa6f-99f8f66ff1ce

4. Pengujian alat pada sungai

   ![image](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/0901402b-80dd-41e3-b166-ff84cbaece14)


https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/f529dae7-f0a0-4324-88eb-f992c5b1c99a


5. Pengetesan Water Level
   
  https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/9324a78c-4d6f-4962-8cf6-fae1af6c441c

6. poster
   ![poster](https://github.com/reikiridvan/Alat-Pendeteksi-Level-Ketinggian-Banjir/assets/168399517/0aefa5cb-c58d-49e7-a27b-301d5130fc81)


   

