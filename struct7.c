#include<stdio.h>
#include<stdlib.h>
enum complex_operations
{
    add = 1,
    sub,
    mult,
    divi
};
struct complex_number
{
    int real_part;
    int imag_part;
};
int main()
{
	struct complex_number a, b, result;
	char sym;
	result.real_part = 0;
	result.imag_part = 0;
	z:
    	printf("1.Addtion\t2.Subtraction\t3.Multipliction\t4.Division\t5.Exit\n");
	printf("Enter the operation you want to perform: ");
    	int ch;
    	scanf("%d", &ch);
    	switch(ch)
    	{
        	case 1:
	        	printf("enter real part of first number(0 for None)\n");
	       		scanf("%d", &(a.real_part));
		        printf("enter imaginary part of first number(0 for None)\n");
	        	scanf("%d", &(a.imag_part));
		        printf("enter real part of second number(0 for None)\n");
		        scanf("%d", &(a.real_part));
	        	printf("enter imaginary part of second number(0 for None)\n");
		        scanf("%d", &b.imag_part);
		        result.imag_part = a.imag_part + b.imag_part;
	        	result.real_part = a.real_part + b.real_part;
		        sym = (result.imag_part > 0)?'+':'-';
		        printf("Addition is : %d %c %d i\n", result.real_part, sym, result.imag_part);
			goto z;
	        	break;

        	case 2:
	        	printf("enter real part of first number(0 for None)\n");
	       		scanf("%d", &(a.real_part));
		        printf("enter imaginary part of first number(0 for None)\n");
	        	scanf("%d", &(a.imag_part));
		        printf("enter real part of second number(0 for None)\n");
		        scanf("%d", &(a.real_part));
	        	printf("enter imaginary part of second number(0 for None)\n");
		        scanf("%d", &b.imag_part);
		        result.imag_part = a.imag_part-b.imag_part;
	        	result.real_part = a.real_part-b.real_part;
		        sym = (result.imag_part > 0)?'+':'-';
		        printf("Subtraction is : %d %c %d i\n", result.real_part, sym, result.imag_part);
			goto z;
	        	break;
		case 5:
			exit;
			break;
	        default:
        		printf("invalid input\n");
			goto z;
		break;
    	}
	   return 0;
}
