#include<stdio.h>
int main()
{
int n;
printf("enter the value of n:");
scanf("%d",&n);
for(int i=0;i<=n;i++)
 {
  for(int a=1;a<=i;a++)
   {
       printf("*");
   }

       printf("\n");
 }
return 0;
}
