#include<stdio.h>
int main()
{
int n,i,d;
scanf("%d",&n);
for(i=1;i<=10;i++){
d=n*i;
printf("%d x %d = %d\n",n,i,d);
}
return 0;
}
