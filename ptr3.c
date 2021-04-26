#include<stdio.h>
int main()
{
	char *color[6] = {"red","green","blue","white","black","yellow"};
	     
	printf("Meaning of color is: %p",color);
	printf("\nMeaning of (color+2) is: %p",color+2);
	printf("\nvalue of *color: %s:",*color);
	printf("\nvalue of *(color+2): %s",*(color+2));
	printf("\nvalue of *(color+5): %s",*(color+5));
	    
	 	return 0;
}
