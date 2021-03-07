#include <stdio.h>
int main() {
   int i, j,rows;

   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for(i=0;i<rows;i++)
   {
    for(j=0;j<=i;j++)
    {
     if(i==rows-1)
     {
      printf("*");
     }
     else if(j==i || j==0)
     {
      printf("*");
     }
     else
     {
      printf(" ");
     }
     }
     printf("\n");
   }

    return 0;
}

