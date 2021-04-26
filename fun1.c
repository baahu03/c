#include<stdio.h>
int fact(int);
int main()
{
	int n,r,a,b,c,e;
    	printf("Enter the number n and time r: ");
 	scanf("%d %d",&n,&r);
        b=fact(n);
	c=fact(n-r);
	e=b/c;    
        printf("The result of given numbers is: %d\n",e);
	return 0;
}
int fact(int x)
{
	if(x==1)
	{
		return 1;
	}
	if(x<0)
	{
		return '0';
	}
	return(x*fact(x-1));
}
