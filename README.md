# Detective Boys walkie talkie pin badge
Walkie talkie radio pin badge inspired by Detective Conan anime series using a custom PCB and an ATMEGA328P (Arduino) microcontroller.		
Integrated rechargable battery, can be charged using any USB-C cable and USB power supply.

This repository includes the fabrication files for mounting the boards and assembling the components (gerber files, bill of materials, pick and place), as long as the code used for the microcontroller.
Keep in mind there are external components to be mounted/soldered as the battery or radio module.

## How to use
To use the walkie talkie plug any headphones with microphone into the 3.5mm audio jack, then flick the switch on the left side of the board and the LED will light up.
Press and hold the button on the board to transmit audio, all the near walkie talkies will receive and play the audio.
No pairing or previous configuration is needed.

The battery lasts around 4 hours and it can be recharged by plugging an USB-C cable, any cable or power source is compatible.
When the battery is charging, the LED near the USB connector will light up, when the battery is fully charged the LED will turn off again.
The headphones used may affect on the audio quality, try using different headphones to compare the results.

## Technical description
This project uses ATMEGA328P microcontroller on a custom PCB, the microcontrollers sends the audio data using NRF24L01 radio modules,
ATMEGA328P microcontroller works at 3.3V 8MHz, you can program it using Arduino IDE and an external programmer like USBTinyISP.

The NRF24L01 radio module is a SMD version suitable for small sized boards, it has a maximum range of 100 meters.

The LiPo battery is directly soldered into the battery terminals of the board, recommended capacity is 100-150mAh.

