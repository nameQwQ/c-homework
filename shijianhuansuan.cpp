#include<stdio.h>
int main()
{
	int s;
	scanf("%d",&s);
	printf("%d–° ±",s/3600);
	printf("%d∑÷÷”",(s%3600)/60);
	printf("%d√Î",(s%3600)%60);
	return 0;
}
