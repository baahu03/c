#include<stdio.h>
#include "complex.h"
#include<stdlib.h>
int main(){
	operation choice;
	int res=0;
	complex c1,c2,*result;
	printf("Enter Operation Number You want to perform on the Complex Number\n");
	printf("1. Complex Addition\n2. Complex Subtraction\n3. Complex Cojugate\n4. Complex Multiplication\n");
	scanf("%d",&choice);
	switch(choice){
		case addc:
			getcomplex(&c1,1);
			getcomplex(&c2,2);
			result=(complex *) malloc(sizeof(complex *));
			result=add(c1,c2,result);
			display(result);
			free(result);
			break;
		case subtractc:
			getcomplex(&c1,1);
			getcomplex(&c2,2);
			result=(complex *) malloc(sizeof(complex *));
			result=sub(c1,c2,result);
			display(result);
			free(result);
			break;
		case conjugatec:
			getcomplex(&c1,1);
			result=(complex *) malloc(sizeof(complex *));
			result=conjugate(c1,result);
			display(result);
			free(result);
			break;
		case multiplicationc:
			getcomplex(&c1,1);
			getcomplex(&c2,2);
			res=multiply(c1,c2);
			printf("Product of two imaginary No. is %d\n",res);

		default:
			printf("Invalid Choice\nQuitting The Program\n");
			break;
	}
	return 0;	
	
}
