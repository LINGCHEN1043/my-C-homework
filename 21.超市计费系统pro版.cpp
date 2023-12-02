#include<stdio.h>
int main() 
{printf("======2022超市计费系统1.1版\n创作者：李晨曦");
int n;float a,b,c,d,e,f;
for(n=1;n<=3;n++)
{printf("请输入第%d件商品的数量",n);
scanf("%f",&a);
printf("请输入第%d件商品的单价",n);
scanf("%f",&b);
if(a==1)
{c=b;printf("第%d件商品的折扣为1\n",n); }
if(a==2)
{c=0.95*2*b;
printf("第%d件商品的折扣为0.95\n",n);}
if(a>=3&&a<=5)
{c=0.9*a*b;printf
("第%d件商品的折扣为0.9\n",n);}
if(a>5)
{c=0.85*a*b;
printf("第%d件商品的折扣为0.85\n",n);}
d=c+d;} 
printf("您好，您应付的总金额是：%f.2元\n",d);
return 0;
}
