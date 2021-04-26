#include<stdio.h>
#define fact(n) for(i=1;i<=n;i++) f=f*i; printf(" fatorial is:-%d",f);

int main()
{      
	int n,i,f=1;
	printf("\n Enter any number:\n");
	scanf(" %d",&n);
	fact(n);
	return 0;
}
