#include<stdio.h>
double fact(int);
double allsum();
int main()
{
	double s;
	s=allsum();
	printf("1/1!+2/2!+3/3!+4/4!+5/5!+6/6!+7/7!=%f",s);
	return 0;
}	
double allsum()
{
	int i,j=1;
	double sum=0;
	for(i=1;i<=7;i++)
	{
		//sums=sums+((i/fact(i))+((i+1)/fact(i+1))-((i+3)/fact(i+3)));
		if(i==1||i%2==0)
		{
			sum+=(i/fact(i));
		}
		else	
		{
			sum-=(i/fact(i));
		}
	}
//	sums+=(7/fact(7));
	
	return(sum);
}
double fact(int x)
{
	if(x==1)
		return 1;
	return (x*fact(x-1));
}	
