#include<stdio.h>
int main()
{
	char c;
	c='B';
	putchar(c);
	putchar('\x42');
	putchar(0x42);
	return 0;
	
}
