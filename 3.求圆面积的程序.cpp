#include<stdio.h>
#define p 3.14159
int main()
{
	int r;float area;
	r=10;
	area=p*r*r;
	printf("半径为%4d的圆的面积为%f\n",r,area);
	printf("半径为%4d的圆的面积为%10.2f\n",r,area);
	printf("半径为%-4d的圆的面积为%-10.2f\n",r,area);
	return 0;
}

