#include<stdio.h>
int main()
{int a,i=0;
for(a=1000;a<=3000;a=a+1)
{if (a%400==0||a%4==0) 
{printf("%6d",a);
i=i+1;}
else;
if(i==5)
{printf("\n");
i=0;} 
else;}
return 0;} 
