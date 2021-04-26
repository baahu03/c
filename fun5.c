#include<stdio.h>
int con(int);
int main()
{
	int n=0,p=0,b=0;
	printf("Enter the number: ");
	scanf("%d",&n);

	printf("Enter the position: ");
	scanf("%d",&p);

	printf("Enter the number of bits: ");
	scanf("%d",&b);

	long double bin=con(n),j;
	long double r[32],k;
	int i=0;
	j=bin;
	while(bin!=0)
	{
		k=j%10;		
		r[i]=k;
		k/=10;
		i++;
	}
	printf("%Lf",r);
//	printf("%s",bin);

	
}
