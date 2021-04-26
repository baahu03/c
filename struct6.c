#include<stdio.h>
int main()
{
	enum flag{ true, false};
	int a[100],n,s;
	printf("Eneter the numbers of elements: ");
	scanf(" %d",&n);
	printf("Enter the %d elements :",n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
	}
	printf("Enter the number to search: ");
	scanf(" %d",&s);
	for(int i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("The number %d is found at %d.\n",s,i+1);
		}
	}

	return 0;
}
