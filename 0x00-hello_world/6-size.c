#include <stdio.h>
/**
*main - display string
*Description: "Programming is like building a multilingual puzzle"
*Return: value 0
*/
int main(void)
{
	printf("Size of an char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of an long int: %li byte(s)\n", sizeof(long int));
	printf("Size of an long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of an float: %li byte(s)\n", sizeof(float));
	return (0);
}
