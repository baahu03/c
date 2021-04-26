#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b,c;
	printf("Enter the numbers: ");
	scanf("%d %d",&a,&b);
	c=gcd(a,b);
	printf("GCD of %d and %d is %d.\n",a,b,c);
}

int gcd(int x, int y)
{
	int c;
	if(y!=0)
		return gcd(y,x%y);
	else
		return x;
}
