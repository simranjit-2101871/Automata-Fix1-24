#include<stdio.h>
int main(int x, char *y[])
{
int a,b,small,i;
a=atoi(y[1]);
b=atoi(y[2]);
small=a>b?b:a;
for(i=small;i>=1;i)
{
if((a%i==0)&&(b%i==0))
{
printf(%d,i);
break;
} }
return 0;
}