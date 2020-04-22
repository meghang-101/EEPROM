//USE ADDRESSES FROM 0 TO 9 ONLY
#include<EEPROM.h>

String str;

String addr;
int addrreal;
String val;
int valreal;

int readx;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    str = Serial.readString();

    if (str.startsWith("read", 0))
    {
      addr = str.substring(5);
      addrreal = addr.toInt();
      readx = EEPROM.read(addrreal);
      Serial.print("The value at ");
      Serial.print(addrreal);
      Serial.print(" address is: ");
      Serial.print(readx);
    }

    if (str.startsWith("write", 0))
    {
      addr = str.substring(6, 7);
      addrreal = addr.toInt();
      val = str.substring(8);
      valreal = val.toInt();
      EEPROM.write(addrreal, valreal);
      Serial.print("address:");
      Serial.print(addrreal);
      Serial.print(" , value:");
      Serial.print(val);
    }
    Serial.println("\n");
  }
}
