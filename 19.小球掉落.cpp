#include<stdio.h>
int main()
{float a,n,c=100,s=100,h;
printf("��������صĴ���n\n"); 
scanf("%f",&n);
for(a=1;a<=n-1;a++)
{c=c+s;
s=s/2;}
printf("���򹲾����ľ���Ϊ%.2f\n��",c);
h=s/2;
printf("�����%.0f�η����ĸ߶�Ϊ%.2f\n��",n,h);
return 0; 
}
