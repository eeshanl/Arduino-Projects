// Eeshan Londhe
// Simple Hello World program written with a LCD display that I wired up to my Arduino Uno

#include <LiquidCrystal.h>

// Globals:
LiquidCrystal lcd(12, 11, 5, 4 ,3, 2);

void setup() {
  lcd.begin(16,2);
  
}

// Flashes "Hello World!" on the LCD display
void loop() {
  lcd.clear();
  lcd.print("Hello World!\0");
  delay(1000);
  lcd.clear();
  delay(1000);
}
