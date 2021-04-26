#include<stdio.h>
int z=0;
int main()
{
	int n,i;
	printf("Enter the range: ");
	scanf("%d",&n);
      	for(i=1;i<=n;i++)
        {
		if(i%5==0)
		{
			continue;
                }
		else
		{
			z=z+i;                     
		}
	}
	printf("addition of all the numbers is %d\n",z);       
	return 0;
}
