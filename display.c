#include "complex.h"
#include<stdio.h>
void display(complex *c1){
	if (c1->imaginary<0)
		printf("%d%di\n",c1->real,c1->imaginary);
	else
		printf("%d+%di\n",c1->real,c1->imaginary);
}
