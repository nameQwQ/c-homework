#include<stdio.h>
int main()
{
	char c1='a',c2='b';
	c1=c1-('a'-'A');
	c2=c2-('a'-'A');
	printf("%c %c\n",c1,c2);
	return 0;
	
}
