#include<stdio.h>
int main()
{float a,n,c=100,s=100,h;
printf("请输入落地的次数n\n"); 
scanf("%f",&n);
for(a=1;a<=n-1;a++)
{c=c+s;
s=s/2;}
printf("此球共经过的距离为%.2f\n米",c);
h=s/2;
printf("此球第%.0f次反弹的高度为%.2f\n米",n,h);
return 0; 
}
