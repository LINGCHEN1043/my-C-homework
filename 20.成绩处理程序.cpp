#include<stdio.h>
int main()
{float m,n,p,i=0,a,b=0,c=0;
for(n=1;n<=5;n++)
{printf("请输入第%.0f门科目的成绩\n",n);
scanf("%f",&m);
if(m>60)
{a=m;
b=b+a;
i++;}
c=c+m;
m=0;}
printf("总成绩为%.1f\n",c);
p=b/i;
printf("高于60分课程的平均分为为%.1f\n",p);
return 0;
}
