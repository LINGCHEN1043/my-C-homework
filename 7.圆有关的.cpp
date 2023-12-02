#include<stdio.h>
#define p 3.14
int main()
{float h,r,C1,Sa,Sb,Va,Vb;
scanf("%f,%f",&r,&h);//为什么分来输入 scanf("%f,%f",&r,&h);
C1=2*p*r;
Sa=p*r*r;
Sb=4*Sa;
Va=4*p*r*r*r/3;
Vb=p*r*r*h;
printf("%4.2f\n",C1);
printf("%4.2f\n",Sa);
printf("%4.2f\n",Sb);
printf("%4.2f\n",Va);
printf("%4.2f\n",Vb);
return 0;}
 
