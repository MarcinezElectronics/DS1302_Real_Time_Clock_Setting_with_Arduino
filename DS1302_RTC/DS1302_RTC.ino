#include <virtuabotixRTC.h>

virtuabotixRTC myRTC(2, 3, 4);  //CLK -> 6 , DAT -> 7, Reset -> 8
 
 
void setup() {
 Serial.begin(9600);
 
 //myRTC.setDS1302Time(0, 49, 9, 1, 13, 3, 2022); //Here you write your actual time/date as shown above 
 //but remember to "comment/remove" this function once you're done as I did
 //The setup is done only one time and the module will continue counting it automatically
}
 
void loop() {
  
 myRTC.updateTime();

 Serial.println();
 Serial.print(myRTC.dayofmonth);
 Serial.print("/");
 Serial.print(myRTC.month);
 Serial.print("/");
 Serial.print(myRTC.year);
 Serial.print(" ");
 Serial.print(myRTC.hours);
 Serial.print(":");
 Serial.print(myRTC.minutes);
 Serial.print(":");
 Serial.print(myRTC.seconds);
 
 delay(5000);
}
