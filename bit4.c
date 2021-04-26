#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,w,p,i,n,w1,d;
	n=0;
	p=1;
	printf("enter the number");
	scanf("%d",&a);
	c=a;
	d=a;
	printf("enter the number to shift");
	scanf("%d",&b);

for(i=1;i<=b;i++)
      {
	p=p*2;
      }
	w=a<<b;
	printf("%d\n",w);
	n=c*p;
	printf("%d\n",c);
	if(w==n)
	printf("equivalence proved for left shift\n");
	w1=c>>b;
	printf("%d\n",w1);
	p=1;
	for(i=1;i<=b;i++)
     {
	p=p*2;
     }
	n=d/p;
	printf("%d\n",n);
	if(w1==n)
	printf("equivqlence proved for right shift\n");
	return 0;
}
