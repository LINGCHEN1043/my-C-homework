#include<stdio.h>
int main()
{int a,b,c,d;
scanf("%1d%1d%1d",&a,&b,&c); 
d=a*100+b*10+c;
if(d==a*a+b*b+c*c)
   printf("����Ϊ�ٺ���");
else printf("����Ϊ�ǰٺ���");
return 0; 
 } 
