LcdHelper
=========

A library helping to print multiples messages on a screen with Arduino

This library allows you to print messages without carriyng about screen size or text length.

## Usage
Just download and extract this repository in your [Arduino library](http://arduino.cc/en/Guide/Libraries) folder.  
LcdHelper is a class allowing to print text on multiple pages for a specified duration.  
See the [docs/](docs) to know how to use it.

Here is an example:
```c++
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
```

## License
Copyright 2015 Pierre Faivre. This is free software, and may be redistributed under the terms specified in the LICENSE file.
