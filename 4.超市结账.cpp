#include<stdio.h>
int main()
{printf("超市计费系统2022版\n作者：李晨曦\n") ;
float b,c,d;
int a; 
printf("请输入商品的数量\n");
scanf("%d",&a);
printf("商品的数量为%d\n",a);
printf("请输入商品的价格\n");
scanf("%f",&b);
printf("商品的价格为%.2f\n",b);
printf("请输入商品的折扣\n");
scanf("%f",&c);
printf("商品的折扣为%.2f\n",c);
d=a*b*c;
printf("你好，该商品你应付%.2f元",d);
}


