#include<stdio.h>
int main()
{again:
printf("������һ����λ��");
int a,b,c,d,e;
scanf("%d",&a);
if(a<=99||a>999)
{printf("�����������������");
goto again;}
else{b=a/100;c=(a-b*100)/10;d=a%10;
e=b+c+d;
printf("����λ��ÿλ���ĺ�Ϊ%d",e);}
}
