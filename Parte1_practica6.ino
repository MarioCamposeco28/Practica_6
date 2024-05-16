/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 1 practica 6 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 16 de mayo
*/

#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2); 

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(3,0);
  lcd.print ("Mario");
  lcd.setCursor(3,1);
  lcd.print("2023459");
  delay(1000);
}
