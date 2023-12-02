#include<stdio.h> 
int main()
{printf("超市计费系统2022版\n作者：李晨曦\n");
int a;float b,c,d;
printf("请输入商品的数量");
scanf("%d",&a);
printf("请输入商品的价格");
scanf("%f",&b);
if(a==1)
  printf("此商品你应该付%f元",b);
else if(a==2)
  printf("此商品你应该付%f元",d=a*b*0.95);
     else if(a>2&&a<=5)
        printf("此商品你应该付%f元",d=a*b*0.9);
          else printf("此商品你应该付%f元",d=a*b*0.85);
return 0; 
 } 
