// Commands to interface with the LCD:
#include <LiquidCrystal.h>

/*================
 * LCD CONNECTIONS:  (note...we're using 4 bit mode here...)
 *   1 to GND
 *   2 to 5V
 *   3 to the contrast control...I did a hardcoded voltage divider.
 *   4 to Arduino digital pin LCD_REG_SEL
 *   5 to GND
 *   6 to Arduino digital pin LCD_ENABLE
 *   7 (no connection)
 *   8 (no connection)
 *   9 (no connection)
 *   10 (no connection)
 *   11 to Arduino  digital pin LCD_D4
 *   12 to Arduino  digital pin LCD_D5
 *   13 to Arduino  digital pin LCD_D6
 *   14 to Arduino  digital pin LCD_D7
 *   15 to 5V
 *   16 to GND
 *====================*/
 
#define LCD_D7         4 
#define LCD_D6         5
#define LCD_D5         6
#define LCD_D4         7
#define LCD_ENABLE     8
#define LCD_REG_SEL    9

// Our LCD has 2 rows of 16 characters.
#define LCD_CHARS 16
#define LCD_ROWS 2

LiquidCrystal lcd(LCD_REG_SEL, LCD_ENABLE, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup()
{
  // The LCD library
  lcd.begin(LCD_CHARS, LCD_ROWS);
  lcd.clear();
  
  lcd.print("Hello World!");
}

void loop()
{
  // move the curor to the start of the second line
  lcd.setCursor(0, 1);
  
  // print #seconds since booted.
  lcd.print(millis()/1000);

}
