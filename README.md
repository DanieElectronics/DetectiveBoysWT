# Detective Boys walkie talkie pin badge
Walkie talkie pin badge from the Detective Conan anime series using a custom PCB and an ATMEGA328P (Arduino) microcontroller.		
Integrated rechargable battery, battery lasts around 4-5 hours and can be charged in one hour using any USB-C cable.
If you want to mount this circuit you can order the boards here: https://www.pcbway.com/project/shareproject/Detective_Boys_walkie_talkie_badge_fdb4029b.html

## How to use
To use the walkie talkie plug any headphones with microphone into the 3.5mm audio jack, then flick the switch on the left side of the board and the LED will light up,
finally press and hold the button on the board to transmit audio, all the near walkie talkies will receive and play the audio.
No pairing or previous configuration is needed.

The battery lasts 4-5 hours and it can be recharged by plugging an USB-C cable, any cable or power source is compatible.
When the battery is charging, the LED near the USB connector will light up, when the battery is fully charged the LED will turn off again.

## Technical description
This project uses the RF24Audio library (https://github.com/nRF24/RF24Audio) in a ATMEGA328P-AU chip, working at 3.3V 8MHz,
you can load the program in a Arduino Pro Mini (3.3V 8Mhz version) and then solder the chip into the pcb, if the chip
is brand new make sure to burn the Arduino Pro Mini bootloader.

The radio module I'm using is the NRF24L01 mini, which is a smaller version suitable for mounting on small pcb, to make it work I had
to lower the transmission speed and the sampling rate of the audio.
