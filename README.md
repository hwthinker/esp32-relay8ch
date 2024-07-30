# Modul ESP32 Relay 2 Channel 
![](https://github.com/hwthinker/ESP32-relay2ch/blob/main/picture/1.png)


## Cara download dengan Serial USB biasa
![](https://github.com/hwthinker/ESP32-relay2ch/blob/main/picture/2.png)
- Pasang serial USB TTL dengan ketentuan: 
   - TX -> RX USB Serial (Kabel Putih)
   - RX -> TX USB Serial (Kabel Hijau)
   - GND -> GND USB Serial (Kabel Hitam)
- Pastikan supply DC 9-12V  dihubungkan 2 pin Terminal block(terdapat label VCC)
- Pastikan GND supply dihubungkan dengan GND 
- Tekan dan tahan tombol IO0 
- klik (tekan dan lepas) tombol EN dan pastikan  tombol IO0 masih di tekan
- Lepas tombol IO0
- Download program dan tunggu sampai selesai
- klik tombol EN untuk run-program (langkah ini penting agar firmware baru dijalankan)
- ulang langkah awal bila melakukan download ulang lagi


## Cara download dengan Serial USB auto Download
![](https://github.com/hwthinker/ESP32-relay2ch/blob/main/picture/3.png)
- Pasang serial USB TTL dengan ketentuan:
    - RX -> RX USB Serial  
    - TX -> TX USB Serial 
    - GND -> GND USB Serial  
    - IO0 -> IO# USB Serial 
    - EN -> EN# USB Serial
- Pastikan supply DC 9-12V  dihubungkan 2 pin Terminal block(terdapat label VCC)
- Pastikan GND supply dihubungkan dengan GND 
- Download program dan tunggu sampai selesai

