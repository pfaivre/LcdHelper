/**
 * Basic example for the LcdHelper library.
 * 
 * It prints a message on two pages.
 */

#include <LiquidCrystal.h>
#include <LcdHelper.h>

LiquidCrystal lcd(19, 18, 17, 16, 15, 14);
LcdHelper screen(&lcd, 16, 2);

void setup()
{
    lcd.begin(16, 2);

    // Print a message on two pages for 10 seconds
    String text[2];
    text[0] = "Hello World!\nPage 1";
    text[1] = "I am a very long text. Page 2";
    screen.print(text, 2, 2, 10);
}

void loop()
{
    screen.update();
}
