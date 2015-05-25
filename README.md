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

void setup() {
	LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
	lcd.begin(16, 2);
	
	// Create a new helper
	LcdHelper screen(&lcd, 16, 2);
	
	// Print a message on two pages for 10 seconds
	screen.print({ "Hello World!\nPage 1", "I am a very long text. Page 2" }, 10);
}

void loop() {
  screen.update();
}
```

## License
Copyright 2015 Pierre Faivre. This is free software, and may be redistributed under the terms specified in the LICENSE file.
