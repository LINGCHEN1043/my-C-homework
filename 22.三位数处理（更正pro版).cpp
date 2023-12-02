#include<stdio.h>
int main()
{again:
printf("请输入一个三位数");
int a,b,c,d,e;
scanf("%d",&a);
if(a<=99||a>999)
{printf("输入错误，请重新输入");
goto again;}
else{b=a/100;c=(a-b*100)/10;d=a%10;
e=b+c+d;
printf("此三位数每位数的和为%d",e);}
}
