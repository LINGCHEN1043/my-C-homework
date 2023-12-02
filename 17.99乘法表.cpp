#include<stdio.h>
int main()
{int a,i;
for(i=1;i<=9;i++)
{for(a=1;a<=i;a++)
printf("%dx%d=%-3d",i,a,i*a);
printf("\n");}
return 0;}
