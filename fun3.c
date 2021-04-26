#include<stdio.h>
int swap(int,int);
int a,b,*p=&a,*q=&b;
int main()
{
	printf("Enter the two numbers: ");
	scanf("%d %d",&a,&b);
	swap(p,q);
	printf("After swaping the numbers: %d %d\n",a,b);
	return 0;
}
int swap(int x,int y)
{
	int z;
	z=*p;
	*p=*q;
	*q=z;
	return 0;
}
