#include <ctype.h>

/**
 * _isupper  - find uppercase
 * Description: find uppercase
 * Return: 0
 * */

int _isupper(int c){
	
	c = isupper(c);
	if (c != 0)
		return (1);
	else
		return (0);
}
