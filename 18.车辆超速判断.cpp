#include<stdio.h>
int main()
{int a,b;
printf("请输入限速");
scanf("%d",&a); 
printf("请输入车速");
scanf("%d",&b);
if(b>1.1*a&&b<1.5*a)
printf("处两百元罚款");
if(b>1.5*a) 
printf("吊销驾驶证");
if(b<1.1*a)
printf("正常行驶");
return 0; }

