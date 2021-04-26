#include<stdio.h>
#include<ctype.h>
int main()
{
	char z;
	printf("Enter the character: ");
	scanf("%c",&z);
	if(z=='A'||z=='a')
	{
		z=1;
	}
	if(z=='B'||z=='b')
	{
		z=2;

	}
	if(z=='D'||z=='d')
	{
		z=3;
	}
	if(z=='F'||z=='f')
	{
		z=4;
	}
	switch(z)
	{
		case 1: printf("\nA for Apple\n");
			break;
		case 2: printf("\nB for Bat\n");
			break;
		case 3: printf("\nD for Dog\n");
			break;
		case 4: printf("\nF for Fan\n");
			break;
		default:printf("\n character is not in range \n");
	}
	return 0;
}
