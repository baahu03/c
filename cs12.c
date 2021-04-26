#include<stdio.h>
int main()
{
	int n,i,a,f=0;
	printf("Enter the range: ");
	scanf("%d",&n);
	a=2;
	while(a<n)
	{
		f=0;
		for(i=2;i<=a/2;i++)
		{
			if(a%i==0)
			{
				f=1;
				break;
			}
			
		}
		if(f==0)
		{
			printf("%d\t",a);
		}
		++a;
	}
	printf("\n");
	return 0;
}
