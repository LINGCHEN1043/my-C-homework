#include<stdio.h> 
int main()
{printf("���мƷ�ϵͳ2022��\n���ߣ����\n");
int a;float b,c,d;
printf("��������Ʒ������");
scanf("%d",&a);
printf("��������Ʒ�ļ۸�");
scanf("%f",&b);
if(a==1)
  printf("����Ʒ��Ӧ�ø�%fԪ",b);
else if(a==2)
  printf("����Ʒ��Ӧ�ø�%fԪ",d=a*b*0.95);
     else if(a>2&&a<=5)
        printf("����Ʒ��Ӧ�ø�%fԪ",d=a*b*0.9);
          else printf("����Ʒ��Ӧ�ø�%fԪ",d=a*b*0.85);
return 0; 
 } 
