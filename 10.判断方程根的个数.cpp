#include<stdio.h>
int main()
{int a,b,c,d; 
scanf("%d,%d,%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0||d==0)
   if(d>0)
   printf("方程有两个不同实数根"); 
   else printf("方程有两个相同实数根");
else printf("方程无实数根");
return 0; 
} 



 
