#include<stdio.h>
int main()
{
	int n,s=0,a,b;
	printf("Enter the number: ");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		b=n%10;
		n=n/10;
		s=s+(b*b*b);
	}
	if(a==s)
	{
		printf("\nthe %d no is armstrong number. \n",a);
	}
	else
	{
		printf("The %d no is not armstrong number.\n",a);
	}
	return 0;
}
