#include <OneWire.h>
#include <DallasTemperature.h> 

OneWire oneWire(2);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures();

  Serial.println("====================");
  Serial.print("Sensor 1: "); 
  Serial.print(sensors.getTempCByIndex(0)); 
  Serial.println("*C"); 
  Serial.print("Sensor 2: "); 
  Serial.print(sensors.getTempCByIndex(1)); 
  Serial.println("*C"); 
  Serial.println("====================");
  delay(1000);
}
