#include<stdio.h>
#include<stdlib.h>
typedef enum {dssd,desd,dac}courses;
typedef module {c,ds,os,shell, perl}modules;
typedef struct
{
	char name[255];
	unsigned long int roll_no;
	courses enrolled_course;
	modules module_reserved[30];
	unsigned int marks_obtained[30];
	unsigned int total_marks[30]; 
	
}student;
	
typedef enum {false,true}boolean;
typedef enum { insert_record=1, view_record , exit}menu;
void enroll_students(student *,courses ,unsigned int);
void view_stu_record(student *);
void allocate_memory(student *, num);

int main()
{

	student *s=NULL;
	unsigned int student_count=0;
	courses to_enroll;
	menu option;
	printf("Enter the operation Number you want to perform\n1. Enroll Students\n2. View Students\n3. Exit\n>>>");
	scanf("%u",&option);
	switch(option)
	{
		case insert_record:
			printf("Enter choice of course you want to enroll\n1. DSSD\n2. DESD\n3. DAC\n>>>");
			scanf("%u",&student_count);
			allocate_memory(s,n);
			enroll_students(s,to_enroll,n);
			break;

		case view_record:
			view_stu_record(s);
			break;
		
	}
	return 0;
}
void allocate_memory(student *st,unsigned int num)
{
	if(st==NULL)
	{
		st= (student *) malloc(sizeof(student)*num);
	}
	else
	{
		printf("%u",sizeof(st));
		st= realloc(st,sizeof(st)+num);
	}

}
void enroll_students(student * st_rec,courses being_enrolled_to, unsigned int num)
{
	unsigned int i=0;
	char enter_more_record='y';
	for(i=0;i<num;i++)
	{
		printf("Enter Student Name\n>>>");
		scanf("%[^\n]s",st[i].name);
		printf("Enter Student Roll Number\n>>>");
		scanf("%lu",st[i].roll_no);
			
		while(enter_more_record=='Y' || enter_more_record=='y'){
			printf("Enter Choice for the module\n 1");
		
		}
			
	}

}
