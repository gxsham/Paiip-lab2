#include "LCD.h"
#include "keyboard.h"

const char keys[16] = {
	
	//1st row
	'+', '=', '0', 'C',
	
	//2nd row
	'-', '3', '2', '1',
	
	//3rd row
	'*', '6', '5', '4',
	
	//4th row
	'/', '9', '8', '7',
};

int main(void)
{
	
	lcd_init(LCD_DISP_ON);
	keyboard_init();
	
	int key = 0xFF;
	
	while(1)
	{
		key = keyboard_getkey();
		
		if(key != 0xFF)
		{
			lcd_putc(keys[key]);
			
			// wait till key is not pressed
			while (keyboard_getkey() != 0xFF)
			;
		}
	}
}


