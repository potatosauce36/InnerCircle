#include<stdio.h>

int main()
{
 int i;
 for(i=1;i<=100;i=i+1)
 {
  if (i%5==0&&i%4==0)
  {
   printf("\nToTheMoon");
  }
  else if(i%5!=0&&i%4==0)
  {
   printf("\nTo");
  }
  else if(i%5==0&&i%4!=0)
  {
   printf("\ntheMoon");
  }
  else
  {
   printf("\n%d",i);
  }

  }
  return 0;
}









