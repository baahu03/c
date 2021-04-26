#include<stdio.h>
int main()
{
	int n,a[32];
	printf("Enter the number: ");
	scanf(" %d",&n);
	int c,j;
	for(c=7;c>=0;--c)
	{
		j=n>>c;
		if(j&1)
			a[c]=1;
		else
			a[c]=0;
	}
	for(int i=7;i>=0;--i)
	{
		if(a[i]==1)
		{
			printf("The numbers %d required %d bits.\n",n,i+1);
			break;
		}
	}
	return 0;
}
