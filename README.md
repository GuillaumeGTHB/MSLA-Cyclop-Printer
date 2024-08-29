# WORK IN PROGRESS !!! (29/08/24)
If you like my work, please support me and buy me a coffee, thank you! [paypal.me/guillaumehaouy](https://www.paypal.com/paypalme/guillaumehaouy) <br />
*I should point out that I am a 20 year old student, it takes me a huge amount of time so don't be too harsh and impatient with me !* <br />
+ **A guide in .pdf format (English language, 64 pages for version 1.1) is included, it is a must-read, everything is explained in detail !** <br />
+ **NanoDLP is too huge for this repertory, you can download it at : https://www.nano3dtech.com/nanodlp-download/** <br />

**1. Introduction** <br />
**2. Technical details of the MSLA Cyclop v1.3 printer** <br />
**3. Technical details of the Helios Curing station** <br />
**4. Pictures of my first prints (print tests take a lot of time, they are not yet 100% optimal)** <br />
**5. Schematics** <br />
- A. Cyclop v1.3 <br />
- B. Helios

# MSLA Cyclop Printer !
<p align="center">
<img src="https://github.com/user-attachments/assets/74617bea-9438-40a1-9b9b-2046781e071e" height="250">
<img src="https://github.com/user-attachments/assets/457f03d9-dadc-47b4-896c-9f4e8908a603" height="250">
<img src="https://github.com/user-attachments/assets/b77a59d2-0fb1-4acb-b26e-1639aca2ed38" height="250">
</p>

## 1. Introduction
+ **Be careful! The resin severely attacks the printed plastic, as explained in the guide, you will need to apply a protective varnish on the tank as well as on the printing plate** <br />
+ Here you will find all the files and instructions on my homemade MSLA Cyclop v1.3 resin printer (and its Helios curing station) ! <br />
The CAD files (.step format) are available, the appropriate GRBl firmware as well as the NanoDLP version that I used. <br />
<p align="center">
<img src="https://github.com/user-attachments/assets/e25e3751-2530-490f-95a1-e939ee2248e4" height="200">
<img src="https://github.com/user-attachments/assets/5cf03c4f-9522-401a-a9d8-465e7685c4e1" height="200"> 
<img src="https://github.com/user-attachments/assets/9625eb58-81cc-498f-bc12-b86f50c8e287" height="200">
<img src="https://github.com/user-attachments/assets/9b24b785-bc67-4cf2-a9b0-55bd476916e7" height="200"> <br />
</p>

## 2. Technical details of the MSLA Cyclop v1.3 printer <br />
+ Standalone printer (integrated slicer, just place an .stl file on a USB key) with Nextion 3.2" touch screen
+ Ultra-rigid structure in 2020 aluminum profiles
+ Ultra resolution axis ! Ball screw and two linear ball axes MGN12C
+ Electronics: Raspberry Pi 3B+ / Arduino Uno + Shield CNC v3 + A4988 driver (NanoDLP firmware for the RPI3B+, GRBL for the Arduino)<br />
+ Screen: 2k, 5.5" 1440p x 2560p <br />
+ Resolution: 47.25µm (0.04725mm) <br />
+ Printable area: 125x67x165mm <br />
+ UV power: 38W (adjustable in PWM with the M3 S1to1000 command) <br />
+ Approximate price: $450 <br />
+ Power supply: 12V 8A <br />
+ → more details in the .pdf guide <br />
<p align="center">
<img src="https://github.com/user-attachments/assets/53ec7daf-cf2d-4e98-b424-542e2585f94f" height="200">
<img src="https://github.com/user-attachments/assets/a0f92b43-b76a-41fa-93a0-9a5811a3f5d8" height="200">
<img src="https://github.com/user-attachments/assets/8c0bea5d-ff4a-4f5c-84ea-1a8b501b7c64" height="200">
<img src="https://github.com/user-attachments/assets/5917b8b9-ff56-4c93-b1d1-bcd5ddffee13" height="200">
</p>

## 3. Technical details of the Helios Curing station <br />
+ Approximate power: 15W <br />
+ Turntable plate with adjustable timer <br />
+ Upward airflow (two 3010 fans: 30x10mm) <br />
+ Approximate price: $30 <br />
+ Minimum power supply: 12V 2A <br />
+ → more details in the .pdf guide <br />
<p align="center">
<img src="https://github.com/user-attachments/assets/a8a1f55d-ca56-4a80-a876-c9ba78984eb0" height="200">
<img src="https://github.com/user-attachments/assets/0387f0f3-5e7a-4226-9eaa-10f27f64a06d" height="200">
<img src="https://github.com/user-attachments/assets/8142ecc2-d189-49be-bcdb-65848cd4500d" height="200">
<img src="https://github.com/user-attachments/assets/843ade4d-63f7-4661-aa92-d4ba5940f2f0" height="200">
</p>

## 4. Pictures of my first prints
<p align="center">
<img src="https://github.com/user-attachments/assets/70746423-bef3-402d-8ceb-47101cd5b7f7" height="200">
<img src="https://github.com/user-attachments/assets/1b9234ab-348c-43dd-a544-7aba78441b1b" height="200">
<img src="https://github.com/user-attachments/assets/f74c0e93-50e7-4b22-a4e4-2b7280c5ca26" height="200">
</p>
<p align="center">
<img src="https://github.com/user-attachments/assets/f4f12f99-195d-4b28-a079-71f9ce6a56ae" height="200">
<img src="https://github.com/user-attachments/assets/67a4b0e2-e87b-48a4-a912-87b0bbee24ee" height="200">
</p>

## 5. Schematics
### A. Cyclop v1.3
<p align="center">
<img src="https://github.com/user-attachments/assets/1831a42f-c823-4332-a965-91973952d14e" height="600">
</p>

### B. Helios
<p align="center">
<img src="https://github.com/user-attachments/assets/a6e83be7-2d55-465d-b2e3-fcb1e17669f9" height="600">
</p>
