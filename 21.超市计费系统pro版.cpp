#include<stdio.h>
int main() 
{printf("======2022���мƷ�ϵͳ1.1��\n�����ߣ����");
int n;float a,b,c,d,e,f;
for(n=1;n<=3;n++)
{printf("�������%d����Ʒ������",n);
scanf("%f",&a);
printf("�������%d����Ʒ�ĵ���",n);
scanf("%f",&b);
if(a==1)
{c=b;printf("��%d����Ʒ���ۿ�Ϊ1\n",n); }
if(a==2)
{c=0.95*2*b;
printf("��%d����Ʒ���ۿ�Ϊ0.95\n",n);}
if(a>=3&&a<=5)
{c=0.9*a*b;printf
("��%d����Ʒ���ۿ�Ϊ0.9\n",n);}
if(a>5)
{c=0.85*a*b;
printf("��%d����Ʒ���ۿ�Ϊ0.85\n",n);}
d=c+d;} 
printf("���ã���Ӧ�����ܽ���ǣ�%f.2Ԫ\n",d);
return 0;
}
