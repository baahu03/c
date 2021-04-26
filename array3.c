#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of integers: ");
	scanf(" %d",&n);
	int a[n];
	printf("Enter the %d numbers of integers: ",n);

	for(int i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
	}
	printf("The entered array is: ");

	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}
