#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
unsigned int factorial(unsigned long int);
int main()
{
	unsigned int count=0, num=0,arr[3],j=0,temp=0;
		
	printf("Enter Any Number which is greater than 2\n");
	scanf("%d",&num);
	srand(time(NULL));
	while(count<3)
	{
		temp= rand()%num;
		arr[count]=temp;
		count++;
	}
	count=0;
	while(count<6)
	{
		
		printf("Permutation %u: ",count+1);
		for(j=0;j<3;j++)
		{
			printf("%d",arr[j]);
			if(j==2)
			{
				printf(".");
			}
			else	
			{
				printf(", ");

			}
		}
		printf("\n");
		j=0;
		temp=arr[j];
		for(j=0;j<3;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[2]=temp;
		if(count==2)
		{
			temp=arr[0];
			arr[0]=arr[1];
			arr[1]=temp;
		}
		count++;
	}
}
