//#include <Arduino.h>
#include <HardwareSerial.h>
#include <TinyGPS++.h>

TinyGPSPlus gps;
HardwareSerial SerialGPS(2);

void setup() {
  Serial.begin(115200);          // RX  TX
  SerialGPS.begin(9600, SERIAL_8N1, 16, 17);
}

void loop() {

  Serial.println("------------");
  Serial.print("available(): ");
  Serial.println(SerialGPS.available());
  Serial.println("------------");
  while (SerialGPS.available() > 0) {
    char c = SerialGPS.read();
    Serial.print(c);
    gps.encode(c);
  }
  Serial.println();

  

  
  
    Serial.print("LAT=");
    Serial.println(gps.location.lat(), 6);
    Serial.print("LONG=");
    Serial.println(gps.location.lng(), 6);
    Serial.print("ALT=");
    Serial.println(gps.altitude.meters());//1
    Serial.print(" Course: ");
    Serial.println(gps.course.deg());
    Serial.print("Speed in mph: ");
    Serial.println(gps.speed.mph());//2
    Serial.print("Date(DDMMYY): ");
    Serial.println(gps.date.value());
    
    Serial.print("year: ");
    Serial.println(gps.date.year());
    Serial.print("month: ");
    Serial.println(gps.date.month());
    Serial.print("day: ");
    Serial.println(gps.date.day());
    Serial.print("Satalite in use:");
    Serial.println(gps.satellites.value());
    /*Serial.print("Horizontal Distance: ");
    Serial.println(gps.hdop.value());*/



  

  delay(1000);
}