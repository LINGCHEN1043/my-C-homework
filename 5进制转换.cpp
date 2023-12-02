#include<stdio.h>
int main()
{char st;
printf("输入一个大写字母/n");
scanf("%c",&st);
st=st+32;
printf("%c\n",st);
printf("十进制为%d\n",st);
printf("八进制为%o\n",st);
printf("十六进制为%x\n",st);
return 0;}
