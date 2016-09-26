#include<stdio.h>
int main()
{
int t,j;
scanf("%d",&t);
for(j=0;j<t;j++)
{
int i = 3, sum = 0,n;
scanf("%d",&n);
for (i = 3;i < n; i += 3) 
{
  sum += i;
}
for (i = 5; i < n; i += 5) 
{
  if (i % 3 != 0) sum += i;
}
printf("%d\n", sum);
}
return 0;
}
