#include<stdio.h>
void itob(int);
void itoh(int);
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	itob(n);
	itoh(n);
	printf("\n%x",n);	
	return 0;
}	
void itob(int k)
{
	int c,j;
	for(c=31;c>=0;--c)
	{
		j=k>>c;
		if(j&1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
void itoh(int n)
{
	char a[100];
	int i=0;
	while(n!=0)
	{
		int temp=0;
		temp=n%16;
		if(temp<10)
		{
			a[i]=temp+48;
			i++;
		}
		else
		{
			a[i]=temp+55;
			i++;
		}
		n=n/16;
	}
	printf("\nThe heaxadecimal value is:");
	for(int j=i-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}
}


