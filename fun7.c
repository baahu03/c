#include<stdio.h>
int fact(int);
int main()
{
	int n,r,nf,rf,rfp,ncr,npr;
	printf("Enter the vale of n and p: ");
	scanf("%d %d",&n,&r);
	nf=fact(n);
	rf=fact(r);
	rfp=fact(n-r);
	npr=nf/rfp;
	ncr=nf/rfp*rf;
	printf("The value of npr is %d and ncr is %d.",npr,ncr);
	return 0;
}
int fact(int x)
{
	if(x==1)
	{
		return 1;
	}
	if(x==0)
	{
		return 0;
	}
	return (x*fact(x-1));
}
