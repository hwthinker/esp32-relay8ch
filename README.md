# Modul ESP32 Relay 8 Channel 
![1](./assets/1.png)

## Cara install plugin Arduino IDE

### Langkah 1: Buka Arduino IDE

1. Buka aplikasi Arduino IDE di komputer Anda. Jika belum ada, unduh dan instal Arduino IDE dari situs resmi Arduino di https://www.arduino.cc/en/software. disarankan menggunakan arduino ide versi 2

### Langkah 2: Tambahkan URL Board Manager untuk ESP32

2. Di Arduino IDE, buka **File** > **Preferences**.

   ![image-20241218161205191](./assets/image-20241218161205191.png)

3. Pada bagian  Additional Boards Manager URLs, tambahkan URL berikut:

```
https://espressif.github.io/arduino-esp32/package_esp32_index.json
```

4. Jika sebelumnya Anda sudah memiliki URL lain di sana, pisahkan URL ini dengan tanda koma atau baris baru.

![image-20241218161237094](./assets/image-20241218161237094.png)

### Langkah 3: Buka Boards Manager

1. Buka **Tools** > **Board** > **Boards Manager**.

![image-20241218161311408](./assets/image-20241218161311408.png)

2. Di kotak pencarian, ketik **ESP32**.

### Langkah 4: Instal Board ESP32

1. Temukan **ESP32 by Espressif Systems** di daftar, kemudian klik **Install**.

![image-20241218161334116](./assets/image-20241218161334116.png)

2. Tunggu hingga proses instalasi selesai.

### Langkah 5: Pilih Board ESP32

1. Setelah instalasi selesai, Anda dapat memilih board ESP32.
2. Buka **Tools** > **Board**, dan gulir ke bawah untuk menemukan berbagai jenis board ESP32 yang telah diinstal. Pilih board yang sesuai, misalnya **ESP32 Dev Module** 

![image-20241218161349632](./assets/image-20241218161349632.png)

3. hasilnya kurang lebih seperti ini

![image-20241218161408935](./assets/image-20241218161408935.png)

### Langkah 6: Pilih Port

1. Sambungkan board ESP32 ke komputer Anda menggunakan kabel USB.
2. Di **Tools** > **Port**, pilih port yang sesuai dengan ESP32 Anda.

## Contoh Program

```c++
#include <Arduino.h>  

#define RLY1     32  //ok
#define RLY2     33  //ok 
#define RLY3     25  //ok 
#define RLY4     26  //ok
#define RLY5     27  //ok
#define RLY6     14   //ok
#define RLY7     12  //ok
#define RLY8     13  //ok
#define LED      23 //ok


void setup() {
  pinMode(RLY1, OUTPUT);  //relay1
  pinMode(RLY2, OUTPUT);  //relay2
  pinMode(RLY3, OUTPUT);  //relay3
  pinMode(RLY4, OUTPUT); //relay4
  pinMode(RLY5, OUTPUT);  //relay1
  pinMode(RLY6, OUTPUT);  //relay2
  pinMode(RLY7, OUTPUT);  //relay3
  pinMode(RLY8, OUTPUT); //relay4
  pinMode(LED, OUTPUT); 
}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(RLY1, HIGH);  
  delay(1000);               
  digitalWrite(RLY1, LOW);   
  delay(1000);    

  digitalWrite(RLY2, HIGH);  
  delay(1000);                      
  digitalWrite(RLY2, LOW);   
  delay(1000);   

  digitalWrite(RLY3, HIGH);  
  delay(1000);                      
  digitalWrite(RLY3, LOW);   
  delay(1000);   

  digitalWrite(RLY4, HIGH);  
  delay(1000);                      
  digitalWrite(RLY4, LOW);   
  delay(1000);   

  digitalWrite(RLY5, HIGH);  
  delay(1000);                      
  digitalWrite(RLY5, LOW);   
  delay(1000);    

  digitalWrite(RLY6, HIGH);  
  delay(1000);                      
  digitalWrite(RLY6, LOW);   
  delay(1000);   

  digitalWrite(RLY7, HIGH);  
  delay(1000);                     
  digitalWrite(RLY7, LOW);   
  delay(1000);   

  digitalWrite(RLY8, HIGH);  
  delay(1000);                      
  digitalWrite(RLY8, LOW);   
  delay(1000); 
  
  digitalWrite(LED, HIGH);  
  delay(1000);                      
  digitalWrite(LED, LOW);  
  delay(1000);                  
}

```



## Cara Upload dengan Serial USB biasa
![ESP32 relay 8 ch](./assets/ESP32%20relay%208%20ch.png)
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


## Cara upload dengan Serial USB auto Download
![2](./assets/2.png)
- Pasang serial USB TTL dengan ketentuan:
    - RX -> RX USB Serial  
    - TX -> TX USB Serial 
    - GND -> GND USB Serial  
    - IO0 -> IO# USB Serial 
    - EN -> EN# USB Serial
- Pastikan supply DC 9-12V  dihubungkan 2 pin Terminal block(terdapat label VCC)
- Pastikan GND supply dihubungkan dengan GND 
- Download program dan tunggu sampai selesai

Warning:❗⚠️
Aktifkan daya untuk menghidupkan alat hanya dengan satu jenis sumber daya, bisa 9VDC, 5VDC, atau AC220V. Jangan menghubungkan beberapa sumber daya secara bersamaan, karena akan menyebabkan kerusakan pada alat.

>[!NOTE]
>Untuk serial disarankan menggunakan serial auto download
>- https://tokopedia.link/Ml3NIixX6Mb atau
>- https://shopee.co.id/product/21375728/27056587756/ 



## Pemecahan Masalah

### A. Port Com tidak dapat dikenali di Arduino

Masuk ke mode unduh:

- Tekan dan tahan tombol Boot/0
- Klik(tekan dan lepas) tombol reset/EN sambil tetap tekan tombol Boot .
- Lepas tombol boot
- Setelah selesai Wajib klik tombol **reset** sekali lagi untuk berpindah dari mode download menjadi mode run

### B. Program tidak dapat berjalan setelah diunggah

Setelah upload berhasil, Anda perlu menekan tombol Reset sebelum dapat dijalankan.

