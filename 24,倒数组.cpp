#include<stdio.h>
int main () 
{char f[20];int i,a,c,d;
gets(f);
while(f[i]!=0)
i++;
c=i-1; 
for(a=0;a<=c;a++,c--)
{
d=f[c];
f[c]=f[a];
f[a]=d;}
puts(f);
return 0;}
