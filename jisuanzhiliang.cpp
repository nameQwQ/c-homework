/*计算铁环的质量*/
#include<stdio.h>
#define RUO 7.86
#define PI 3.14159 
int main()
{
	double d1,d2,h,s1,s2,w;
	scanf("%lf %lf %lf",&d1,&d2,&h);
	s1=PI*(d1/2)*(d1/2);
	s2=PI*(d2/2)*(d2/2);
	w=(s1-s2)*(d1/2);
	printf("铁环的质量是:%.2lf\n",w);
	return 0;
	
 } 
