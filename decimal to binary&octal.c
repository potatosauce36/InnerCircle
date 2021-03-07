#include<stdio.h>
#include<stdlib.h>
int main(){
int a[10],n,i,t;


printf("Enter the number to convert: ");
scanf("%d",&n);
printf("type 1 for binary, 2 for octal");
scanf("%d",&t);
if(t==1)
{

for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\nBinary of Given Number is=");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}

return 0;
}



if(t==2)
{
 for(i=0;n>0;i++)
 {
  a[i]=n%8;
  n=n/2;
 }
printf("\nOctal of given number is");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}










}














