#include<stdio.h>
int main()
{
	float p,t,r;
	float si;
	printf("Enter the principle: ");
	scanf("%f",&p);
	
	printf("Enter the time in year: ");
	scanf("%f",&t);
	
	printf("Enter the rate: ");
	scanf("%f",&r);
	
	si=(p*t*r)/100;
	
	printf("The simple intrest is %0.2f\n",si);
	return 0;
}
	
