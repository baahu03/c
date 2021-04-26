#include<stdio.h>
int main()
{
	int a[20],n,s,i;
	printf("Enter the numbers of elements :");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search: ");
	scanf("%d",&s);
	for(i=0;i<n;++i)
	{
		if(s==i)
		{
			printf("\nThe Number is found at %d.",i);
			break;
		}
	}
	return 0;
}
