#include<stdio.h>
#define p 3.14159
int main()
{
	int r;float area;
	r=10;
	area=p*r*r;
	printf("�뾶Ϊ%4d��Բ�����Ϊ%f\n",r,area);
	printf("�뾶Ϊ%4d��Բ�����Ϊ%10.2f\n",r,area);
	printf("�뾶Ϊ%-4d��Բ�����Ϊ%-10.2f\n",r,area);
	return 0;
}

