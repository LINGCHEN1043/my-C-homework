#include<stdio.h> 
int main()
{int a,b,c,d;
for(a=1;a<=9;a++)
for(b=1;b<=9;b++)
for(c=1;c<=100;c++)
if(a*1000+a*100+b*10+b==c*c)
{printf("成功算出，车牌号为%d",d=c*c);
break; }
}
