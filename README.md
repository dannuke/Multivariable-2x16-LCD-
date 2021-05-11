# Multivariable-2x16-LCD-
Display humidity and temperature (either C or F degrees) on 2x16 LCD
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
