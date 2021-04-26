#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter the values of i and j: ");
	scanf("%d %d",&i,&j);
	(i==20||j==20)?printf("\nAt least variable having 20.\n"):printf("Both are not having 20.\n");
	(i<=40||j<=40)?printf("Both are less than or equal to 40.\n"):printf("Both are not less than or equal to 40.\n");
	return 0;
}
