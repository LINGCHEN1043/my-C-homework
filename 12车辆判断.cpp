#include<stdio.h>
int main ()
{int a;
scanf("%d",&a);
switch(a){
case 1:printf("红灯--停车");break;
case 2:printf("黄灯--即将停车");break;
case 3:printf("绿灯--可通行");break;
default:printf("您输入有误，请重新输入");}
 } 
