#include<stdio.h>
int main()
{
	short int a=41667;
	printf("The value of a is: %x",a);
	printf("%x\n",~a);
	printf("%x\n",a^0x3f06);
	printf("%x\n",a^0x3f06);
	printf("%x\n",a|~0x3f06);
	printf("%x\n",a>>3);
	printf("%x\n",a<<5);
	printf("%x\n",a^~a);
	printf("%x\n",a|~a);
	printf("%x\n",(a&~0x3f06)<<8);
	printf("%x\n",a&~(0x3f06>>8));
	return 0;
}
