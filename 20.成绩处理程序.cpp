#include<stdio.h>
int main()
{float m,n,p,i=0,a,b=0,c=0;
for(n=1;n<=5;n++)
{printf("�������%.0f�ſ�Ŀ�ĳɼ�\n",n);
scanf("%f",&m);
if(m>60)
{a=m;
b=b+a;
i++;}
c=c+m;
m=0;}
printf("�ܳɼ�Ϊ%.1f\n",c);
p=b/i;
printf("����60�ֿγ̵�ƽ����ΪΪ%.1f\n",p);
return 0;
}
