#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int smokesensorPin = A0; 
int tempsensorPin = A1; 
int motorPin = A2;
int pushbut = 12;
int buzzer = 11; 
int LEDR = 10; 
int LEDG = 8; 
int LEDB = 9; 

void setup(){
  Serial.begin(9600);
  pinMode(smokesensorPin, INPUT); 
  pinMode(tempsensorPin, INPUT); 
  pinMode(pushbut, INPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(LEDR, OUTPUT); 
  pinMode(LEDB, OUTPUT); 
  pinMode(LEDG, OUTPUT); 
  lcd.begin(16, 2); 
}

void loop(){ 
  
  int reading = analogRead(tempsensorPin);  
  float voltage = reading * 5.0; 
  voltage /= 1024.0; 
  float suhu = (voltage - 0.5) * 100 ; 
  lcd.setCursor(0,0); 
  lcd.print(suhu); 
  lcd.print(" Degree C"); 
  int smokesensorValue = analogRead(smokesensorPin); 
  Serial.print("Suhu Ruangan: "); 
  Serial.print(suhu); 
  Serial.println(" Degree C"); 
  Serial.print("Smoke Detected :"); 
  Serial.println(smokesensorValue); 
  
  if(smokesensorValue >= 450 && suhu >= 60){ 
    lcd.setCursor(0,1); 
    lcd.print("FIRE ALERT     "); 
    tone(buzzer, 1000,200);
    analogWrite(LEDR, 255); 
    analogWrite(LEDG, 0); 
    analogWrite(LEDB, 0); 
    analogWrite(motorPin, 200); 
  }
  if(smokesensorValue >= 450 && suhu < 60){ 
    lcd.setCursor(0,1); 
    lcd.print("SMOKE DETECTED  "); 
    tone(buzzer, 200,200); 
    analogWrite(LEDR, 225); 
    analogWrite(LEDG, 225); 
    analogWrite(LEDB, 0);
    analogWrite(motorPin, 0);
  }
  if(smokesensorValue < 450 && suhu <60){ 
    lcd.setCursor(0,1); 
    lcd.print("NO SMOKE        "); 
    analogWrite(LEDR, 0); 
    analogWrite(LEDG, 225); 
    analogWrite(LEDB, 0);
    analogWrite(motorPin, 0);
  }
  if(smokesensorValue < 450 && suhu >=60){ 
    lcd.setCursor(0,1); 
    lcd.print("NO SMOKE        "); 
    analogWrite(LEDR, 225); 
    analogWrite(LEDG, 225); 
    analogWrite(LEDB, 0);
    analogWrite(motorPin, 0);
  }
  delay(100); 
  
  if(digitalRead(pushbut)==HIGH){
    analogWrite(motorPin, 200);
  }
  else{
    analogWrite(motorPin, 0);
  }
}
