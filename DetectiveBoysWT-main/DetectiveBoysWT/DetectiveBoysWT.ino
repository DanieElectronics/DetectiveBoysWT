//// Detective Boys Walkie Talkie ////

/* 
  This software uses RF24Audio library to send audio data between NRF24L01 radio modules
  This code runs on an ATMEGA328P microcontroller at 3.3v & 8MHZ
  Use Arduino Pro Mini 3.3v 8MHz at board selection in Arduino IDE
  You must burn the bootloader before uploading the code
*/

#include "RF24.h"
#include <SPI.h>
#include "RF24Audio.h"

RF24 radio(7,8);                // Set radio up using pins 7 (CE) 8 (CS)
RF24Audio rfAudio(radio,1);     // Set up the audio using the radio, and set to radio number 0.

void setup() {          

  rfAudio.begin();              // Initialize the library.
  rfAudio.setVolume(4);         // Set volume at 50% (4/7)

}

void loop() {
  rfAudio.handleButtons();
}





/* Documentation and References:

References:
All Library documentation: http://tmrh20.github.io/
New (2014) RF24 Audio Library: https://github.com/TMRh20/RF24Audio
Optimized (2014) RF24 Lib Source Code: https://github.com/TMRh20/RF24 
Optimized (2014) RF24 Network Lib: https://github.com/TMRh20/RF24Network

*/
