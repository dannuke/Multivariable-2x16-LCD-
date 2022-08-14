//Modified by Dan Davis, public domain.
//modified to get DHT11 sensor to dispaly on LCD : 2 lines , 16 pins, and either F or C degrees
// modified sketches  from  Peter Dalmaris, Lee Assam, and Hive-RD blog

#include "LiquidCrystal.h"

#include "DHT.h"

#define DHTTYPE DHT11 // DHT's signal pin   feeds data to Arduino Analog input A0

#define DHTPIN A0 //defines Arduino UNO analog pin A0


DHT dht(DHTPIN,DHTTYPE);

LiquidCrystal lcd(3,4,5,6,11,12,13,14,15,16); //interface pin list, note LCD pins 7,8,9,10 are not used

//LCD pin configuration:

//LCD 1 to breadboard negative power rail
//LCD 2 to breadboard positive power rail
//LCD 3 to potentiometer centre pin // this helps to change the LCD brightness
//LCD 4 to Arduino Digital Pin 12 // Arduino sends LCD data (LCD character coordinates)
//LCD 5 to breadboard negative power rail
//LCD 6 to Arduino Digital Pin 11 // Arduino sends LCD data (LCD initiate command)
//LCD 11 to Arduino Digital Pin 5 // Arduino sends LCD data
//LCD 12 to Arduino Digital Pin 4 // Arduino sends LCD data
//LCD 13 to Arduino Digital Pin 3 // Arduino sends LCD data
//LCD 14 to Arduino Digital Pin 2 // Arduino sends LCD data
//LCD 15 to lead wire to 220 ohm resistor and then second lead wire  from 220 ohm resistor to breadboard positive power rail
//LCD 16 to breadboard negative power rail


//potentiometer pin configuration:

//Potentiometer positive pin to breadboard positive power rail
//Potentiometer negative pin to breadboard negative power rail
//Arduino GND to breadboard negative power rail
//Arduino 5v to breadboard positive power rail

// DHT 11 Sensor, tempearure and huidity sensor

//DHT11 positive pin to breadboard positive power rail
//DHT11 negative pin to breadboard negative power rail
//DHT11 Signal  pin to Arduino Analog A0 // data stream  from DHT11 to Arduino



void setup() {
  // put your setup code here, to run once:

   lcd.begin(16,2); //Defines LCD rows : 16 rows by 2  lines display

}

void loop() {
  // put your main code here, to run repeatedly:
// Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // check if returns are valid, if they are NaN (not a number) then something went wrong!
  if (isnan(t) || isnan(h)) {
    lcd.println("Failed to read from DHT");
  } else {
   //Uncomment these lines if you prefer to use the Fahrenheit scale 
   //instead of Celsius. Remember to change line 44 so that the 
   //symbol is "F" instead of "C"
    //float fahrenheitTemp = t * 9.0/5.0+32.0;
   lcd.print("Temperature: ");
   lcd.print("fahrenheitTemp");
   lcd.println(" F");    lcd.print("Humidity: ");
   lcd.print(h);
   lcd.print(" %\t");
   lcd.print("Temperature: ");
   lcd.print(t);
   lcd.println(" *C");
  }
    delay(5000);  //Insert a 5sec delay between readings
}

