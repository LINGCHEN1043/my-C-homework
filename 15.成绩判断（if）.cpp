#include<stdio.h>
int main ()
{float a;
scanf("%f",&a);
if (a>=90)
printf("优秀");
else if (a<90&&a>=80)
        printf("良好");
     else if (a<80&&a>=60)
              printf("中等");
          else printf("差"); 
return 0;
 } 
