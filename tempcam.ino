/*************************************************** 
  This is a library example for the MLX90614 Temp Sensor

  Designed specifically to work with the MLX90614 sensors in the
  adafruit shop
  ----> https://www.adafruit.com/products/1748
  ----> https://www.adafruit.com/products/1749

  These sensors use I2C to communicate, 2 pins are required to  
  interface
  Adafruit invests time and resources providing this open source code, 
  please support Adafruit and open-source hardware by purchasing 
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.  
  BSD license, all text above must be included in any redistribution
 ****************************************************/

#include <Wire.h>
#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  Serial.begin(19200);
  mlx.begin();  
}

float ot, at;
void loop() {
   
  ot = mlx.readObjectTempC();
  at = mlx.readAmbientTempC();
  Serial.print( millis() ); Serial.print(";"); Serial.print( ot ); Serial.print(";"); Serial.print(at); Serial.print(";"); Serial.println( ot-at );
  delay(60);
}
