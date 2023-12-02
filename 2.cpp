#include<stdio.h>
struct student
{
	int num;     //学号
	char name[20];    //姓名
	float score;     //总分
}a[5];
int main()
{
	int i,t;
	FILE *f1,*f2;
	f1=fopen("in.txt","r");
	for(i=0;i<5;i++){
		fscanf(f1,"%d",&a[i].num);
		fscanf(f1,"%s",a[i].name);
		fscanf(f1,"%d",&a[i].score);
	}
	fclose(f1);
	for(i=0;i<5;i++){
		if(a[i].score>a[i+1].score){
			t=a[i].score;
			a[i].score=a[i+1].score;
			a[i+1].score=t;
		}
	}
	f2=fopen("out.txt","w");
	fprintf(f2,"总分最高的学生：");
	fputs(a[4].name,f2);
	fprintf(f2,"总分：%d",a[4].score);
	return 0;
}