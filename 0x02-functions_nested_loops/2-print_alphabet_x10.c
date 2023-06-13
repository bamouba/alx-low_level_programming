#include "main.h"
/**
 * we gonna print the alphabet 10 time in a row
 *
 */
void print_alphabet_x10 (void){
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ++ch){
	for (ch = 'a' ; ch <= 'z' ; ++ch){
	_putchar(ch);
	if (ch == 'z'){
		_putchar(/n);
	}
	}
	}

}
