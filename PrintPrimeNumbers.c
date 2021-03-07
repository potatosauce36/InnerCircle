#include<stdio.h>

int main()
{
 int a,i;
 int t=1;
 printf("Enter a number");
 scanf("%d",&a);
 if (a<=1)
 {
  printf("There are no prime numbers below %d",a);
  return 0;
 }
  else
  {
    printf("2,");
   while(t<a)
   {

    for(i=2;i<t;i++)
    {
     if(t%i==0)
     {
      goto lol;
     }
     else if(i==t-1)
     {
      printf("%d,",t);

     }
    }
    lol:
     t=t+1;
   }
  }
return 0;
}
























