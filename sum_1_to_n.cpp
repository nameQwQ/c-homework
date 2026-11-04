#include<stdio.h>
int main()
{
	int i,n,s=0;
	scanf("%d",&n);
	i = 1;
	while(i<=n)
	{
		s=s+i;
		i++;
	}
	printf("s=%d\n",s);
	return 0;
	
	
}
