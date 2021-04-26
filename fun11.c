#include<stdio.h>
char ch[10]="";
int i=0;
char *itoa(int n)
{
	if(n/10==0)
	{
		ch[i++]=n%10+48;
		return ch;
	}
	else
	{
		itoa(n/10);
		ch[i++]=n%10+48;
		return ch;
	}
}
int main()
{
	int a;
	printf(" Enter any number:");
	scanf(" %d",&a);
	if(a<0)
	{
		a+=(-2*a);
		printf("String form is '%s'.\n",itoa(a));
	}
	else
	{
		printf("String form is '%s'.\n",itoa(a));
	}
	return 0;
}
