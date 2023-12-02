#include<stdio.h>
int main ()
{int y,a,b,c;
for(y=100;y<1000;y++)
{a=y/100;
b=y/10-a*10;
c=y%10;
if(y==a*a*a+b*b*b+c*c*c)
printf("%d\n",y);}
 } 
