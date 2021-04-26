#include<stdio.h>
int main()
{
	int r,s=0;
	printf("Enter the range: ");
	scanf("%d",&r);
	int i=1;
	while(i<=r)
	{
		if(i%2==1)
		{
			s+=i;
			i++;
		}
		else
		{
			i++;
			continue;
		}	
	}
	printf("Addition of all odd numbers upto %d is %d.\n",r,s);
	return 0;
}
