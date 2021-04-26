#include<stdio.h>
int main()
{
    int a,b,c,d;
  printf("enter any two numbers\n");
  scanf("%d %d",&b,&c);
  printf("1.Add 2.Sub 3.Mul 4.Div 5.Mod\n");
  printf("Enter the opration you want\n");
  scanf("%d",&a);
  switch(a)
  {
  case 1:
       d=b+c;
       printf("\n The result of your choice is: %d",d);
       break;

  case 2:
       d=b-c;
       printf("\n The result of your choice is: %d",d);
       break;

  case 3:
       d=b*c;
       printf("\n The result of your choice is: %d",d);
       break;
  case 4:
       d=b/c;
       printf("\n The result of your choice is: %d",d);
       break;	
  case 5:
       d=b%c;
       printf("\n The result of your choice is: %d",d);
       break;
 default :
        printf("\n oops !!!! plzz enter the correct opation\n");

   }
        return 0;
}


