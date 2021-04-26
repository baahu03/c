#include<stdlib.h>
#include<string.h>
#include"stack.h"

void initStack (STACK *s, int element_size)
{
	s->element_size=element_size;
	s->num_elements=0;
	s->max_elements=50;
	s->elements=malloc(s->max_elements * element_size);
}

void push(STACK *s, const void *eptr)
{
 	void* top = s->elements + s->num_elements * s->element_size;
 	memmove(top , eptr , s->element_size); 
 	s->num_elements++;
}
void pop(STACK *s, void *eptr)
{

 	void* top = s->elements + s->num_elements-1 * s->element_size;
 	memmove(top , eptr , s->element_size); 
 	s->num_elements--;
}
