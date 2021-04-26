#include<stdio.h>
int main()
{
	int a,s=0,r=0;
	printf("Enter the number: ");
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		a/=10;
		s+=r;
	}
	printf("The adiition of all digits is: %d.\n",s);
	return 0;
}
