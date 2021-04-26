#include<stdio.h>
long double fact(long double);
int main()
{
       	long double n;
	printf("Enter the number for factorial: ");
	scanf("%Lf",&n);
	printf("The factoril of number %Lf is %0.2Lf.\n",n,fact(n));
	return 0;
}
long double fact(long double x)
{
	if(x==1)
	{
		return 1;
	}
	if(x<1)
	{
		return '0';
	}
	return (x*fact(x-1));
}
