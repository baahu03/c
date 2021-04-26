#include "complex.h"
#include<stdio.h>
void getcomplex(complex *c, int count){
	printf("Enter Complex Number %d\n",count);
	printf("Enter Real Part:\n");
	scanf("%d",&c->real);
	printf("Enter Imaginary Part:\n");
	scanf("%d",&c->imaginary);

}
