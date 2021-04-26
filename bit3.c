#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,d,mask,n;
	char op,shift;
	printf("Enter the number:\n");
	scanf("%x",&a);
	char ch;
	z:
	printf("Choose One Operation you want perform: ");
	printf("a.Convert decimal to binary\tb.Masking operation\tc.Shift operation\td.exit\n");
	getchar();
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a': d=~a;
			printf("Eque. hexa=%x \n",d);
			goto z;
			break;
	
		case 'b': 
			printf("Enter the mask value:\n");
			scanf("%x",&mask);
			printf("Enter the Bitwise operator:\n");
			getchar();
			scanf("%c",&op);
			if(op=='&')
				printf("And mask=%x \n",a&mask);
			else if(op== '|')
				printf("or mask =%x\n",a|mask);
			else if(op== '^')
				printf("exor mask =%x\n",a^mask);
			else 
				printf("Invalid operation");
			goto z;
			break;
		
		case 'c':
			printf("Enter the bits to shift");
			scanf("select right or left shift");
			getchar();
			scanf("%c",&shift );
			if(shift=='l')
				printf("l shift=%x\n",a<<n);
			else if(shift=='r')
				printf("r shift = %x\n",a>>n);
			else
				printf("Invalid input\n");
			goto z;
			break;
		
		case 'd': exit(0);
			break;
	}
}

