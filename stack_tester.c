#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stack.h"

int main()
{
	STACK st;
	STACK *s=&st;
	
	initStack(s,sizeof(int));
	
	int x=1;
	int *a=&x;
	
	push(s,a);x++;push(s,a);x++;push(s,a);x++;push(s,a);x++;push(s,a);x++;push(s,a);x++;push(s,a);x++;push(s,a);x++;push(s,a);x++;push(s,a);x++;push(s,a);
	printf("total elements %lu",s->num_elements );

	for(int i=0; i<s->num_elements;i++)
	printf("\nelements %u ",*(int*)s->elements+i);
    
    pop(s,&a);
    for(int i=0; i<s->num_elements;i++)
	printf("\nelements %u ",*(int*)s->elements+i);
    printf("pop-1 total elements %lu",s->num_elements );

    pop(s,&a);
    pop(s,&a);
    pop(s,&a);
    pop(s,&a);
    printf("2-pop total elements %lu",s->num_elements );
	for(int i=0; i<s->num_elements;i++)
	printf("\nelements %u ",*(int*)s->elements+i);
    
	
}