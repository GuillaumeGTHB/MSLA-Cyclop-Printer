/*
 * EEPROM Clear
 *
 * Sets all of the bytes of the EEPROM to 0.
 * This example code is in the public domain.
 *
 * PLEASE, IF YOU ARE USING IT WITH GRBL, MAKE SURE
 * YOU HAVE NOTHING CONNECTED TO PIN 13 (Motors, spindle...)
 * YOU BETTER UPLOAD IT DISCONNECTING ANY SHIELD FROM THE ARDUINO
 */
 
#include <EEPROM.h>

void setup()
{
  // write a 0 to all 512 bytes of the EEPROM
  for (int i = 0; i < 512; i++)
    EEPROM.write(i, 0);
    
  // turn the LED on when we're done
  digitalWrite(13, HIGH);
}

void loop()
{
}
