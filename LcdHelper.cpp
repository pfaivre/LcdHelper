/**
 * LcdHelper
 *
 * LcdHelper.cpp
 * Pierre Faivre - may. 2015
 */

#include <Arduino.h>
#include "LcdHelper.h"

/**
 * Creates a new helper
 * @param lcd The screen to write on
 * @param posx Screen width
 * @param posy Screen height
 */
LcdHelper::LcdHelper(LiquidCrystal* lcd, int rows, int cols) {
    _lcd = lcd;
    _rows = rows;
    _cols = cols;

    _pageDuration = 2000;
    _currentPageTime = 0;
    _totalTime = 0;

    _init();
}

/**
 * Destroys the helper
 */
LcdHelper::~LcdHelper() {

}

/**
 * Prepare the screen to be used with LcdHelper.
 */
void LcdHelper::_init() {
    _lcd->clear();
}

/**
 * Change the displayed text.  
 * @param text Page do print successively on the screen
 * @param nbPages Number of pages in text parameter
 * @param pageDuration Duration in milliseconds of each page
 * @param duration Time to display the text before clearing the screen
 */
void LcdHelper::print(String text[], unsigned short nbPages, int pageDuration, int duration) {
    _currentPageIndex = 0;
    _currentPageTime = 0;
    _totalTime = 0;

    _lcd->clear();
    _lcd->print(_currentPageIndex);
}

/**
 * This method should be called regularly.
 * It allows the helper to change the text regularly
 */
void LcdHelper::update() {
    
}

/**
 * Change the way the graph is being printed
 * @see GraphMode
 */
void LcdHelper::clear() {

}
