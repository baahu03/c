#include<stdio.h>
#define tokenpaster(n) printf("\n value is = %d",token##n);
int main()
{
	 int token25=1000;
	 tokenpaster(25);
 	   return 0;
}

