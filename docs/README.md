How to use it
=============

## Class LcdHelper

---
```c++
LcdHelper(LiquidCrystal* lcd, int cols, int rows);
```
Creates a new helper.  
Parameters:
* `lcd` - An instance of LiquidCrystal previously created
* `rows` - Width of the screen
* `cols` - Height of the screen

---
```c++
void print(String text[], unsigned short nbPages, int pageDuration, int duration);
```
Change the displayed text.  
Parameters:
* `text` - Strings to display successively
* `nbPages` - Number of pages in text parameter
* `pageDuration` - Duration in milliseconds of each page
* `duration` - Time to display the text before clearing the screen

---
```c++
void update();
```
This method should be called regularly. It allows the helper to change the text regularly given the time elapsed.

---
```c++
void clear();
```
Clear the screen.
