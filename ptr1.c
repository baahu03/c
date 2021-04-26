#include<stdio.h>
int main()
{
	int x[8]= {10,20,30,40,50,60,70,80};
	int *p=NULL;
	    p=x;
	printf(" meaning of x: %p",p); 
	printf(" \nmeaning of (x+2): %p",(p+2));
	printf(" \n The value of *x:%d",*p);
	printf("\n The value of (*x+2):%d",(*p+2));
	printf("\n The value of *(x+2):%d",*(p+2));
	   return 0;

}
