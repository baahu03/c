#include<stdio.h>
int main()
{
	int n,f=1;
	printf("Enter the number for evaluating factorial: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("The factorial of %d is %d.\n",n,f);
	return 0;
}
