#include<stdio.h>
#include<stdlib.h>
float addition(float, float);
float subtraction(float, float);
double multiplication(float, float);
float divide(float, float);
double square(float);
int factorial(int);
int main()
{
	int choice;
	float a, b;
	z:
	printf("\n1.add\t2.sub\t3.mul\t4.div\t5.square\t6.factorial\t7.Exit\n");
	printf("Enter the operation  do you want to perform: \n");
	scanf("%d", &choice);
	switch(choice)
    	{
        	case 1:
			printf("Enter two numbers to add: ");
			scanf("%f %f", &a, &b);
			printf("Result is: %f.\n", addition(a, b));
			goto z;
			break;
        
		case 2:
			printf("Enter two numbers to sub: ");
			scanf("%f %f", &a, &b);
			printf("Result is: %f.\n", subtraction(a, b));
			goto z;
			break;
        
		case 3:
        		printf("Enter two numbers to mul: ");
			scanf("%f %f", &a, &b);
			printf("Result is: %f.\n", multiplication(a, b));
			goto z;
			break;
		case 4:
			printf("Enter two numbers to divide: ");
			scanf("%f %f", &a, &b);
			printf("Result is: %f.\n", divide(a, b));
			goto z;
			break;
		case 5:
			printf("Enter number to sqaure: ");
			scanf("%f", &a);
			printf("Result is: %f.\n", square(a));
			goto z;
			break;

		case 6:
			printf("Enter to get factorial of: ");
			scanf("%f", &a);
			printf("Result is %d.\n", factorial((int)a));
			goto z;
			break;
		case 7:
			exit;
			break;
		default:
			printf("Enter the appropriate operation:\n");
			goto z;
			break;	

    	}
	return 0;
}
float addition(float a, float b)
{
	float sum = a + b;
	return sum;
}

float subtraction(float a, float b)
{
	float diff = a - b;
	return diff;
}

double multiplication(float a, float b)
{
	double pro = a * b;
	return pro;
}

float divide(float a, float b)
{
	if (b == 0)
	{
        	printf("can't divide by zero\n");
	        return -1;
	}
	float d = a / b;
	return d;
}

double square(float a)
{
	double s = a * a;
	return s;
}
int factorial(int num)
{
	int fact = 1;
	if (num==1)
	{
		return 1;
    	}
       	return num * factorial(num - 1);
    	
}
