#include<stdio.h>
int main()
{
	int n,c=0,y;
	printf("Enter the number: ");
	scanf("%d",&n);
	y=n;
	while(n!=0)
	{
		c*=10;
		c+=n%10;
		n/=10;
	}
	if(y==c)
	{
		printf("\nThe number %d is palandrome.\n",y);
	}
	else
	{
		printf("\nThe no %d is not palandrome.\n",y);
	}
	return 0;
}
