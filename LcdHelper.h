/**
 * LcdHelper
 *
 * LcdHelper.h
 * Pierre Faivre - may. 2015
 */

#ifndef LcdHelper_h
#define LcdHelper_h

#include <LiquidCrystal.h>

class LcdHelper {
    public:
        LcdHelper(LiquidCrystal* lcd, int rows, int cols);
        ~LcdHelper();
        
        void print(String text[], unsigned short nbPages, int pageDuration, int duration);

        void update();
        void clear();
        
    private:
        LiquidCrystal* _lcd; // LCD to print the text
        int _rows; // Width of the screen
        int _cols; // Height of the screen

        unsigned int _pageDuration; // Time to display each page
        unsigned int _currentPageTime;
        unsigned int _totalTime;

        int _currentPageIndex;
        
        void _init();
};

#endif
