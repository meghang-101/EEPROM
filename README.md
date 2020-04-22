# EEPROM
EEPROM stands for ELECTRICALLY ERASABLE PROGRAMMABLE READ ONLY MEMORY.

It is a type of non-volatile memory used in computers, integrated in microcontrollers for smart cards and remote keyless systems, and other electronic devices to store relatively small amounts of data but allowing indivisual bytes to be erased and reprogrammed.

In the Arduino, EEPROM is the only available memory that can store actual bytes programmed by the user, unlike flash memory that cannot be programmed by the user.

It is mainly used for callibration of motion sensors. A series of integers can be programmed and be saved as the EEPROM and can be extracted at the time of callibration.

A total of 1kb of memory is dedicated to the EEPROM. Hence, there can be a total of 1024 addresses inside the EEPROM. Each of the 1024 addresses can store unique sequence of bytes that can be easily programmed by the user.

The data inside the EEPROM remains unchanged even after the Arduino is disconncted from the power source or the reset button is pressed. Only when the reset button is pressed twice, the EEPROM resets itself.

In the following code, we can use the Serial Monitor to read and write the EEPROM.

The EEPROM.read(address) function reads the value inside the specified address.

The EEPROM.write(address,value) function writes the specified value to the specifies address.

#NOTE: This code is under construction, for now, use addresses from 0 to 9 only.
