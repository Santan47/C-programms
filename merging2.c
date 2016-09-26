#include<stdio.h>
int main()
{
int a[3],b[4],c[7],i;
printf("enter the first array elements");
for(i=1;i<=3;i++)
scanf("%d",&a[i]);
printf("enter the second array elements");
for(i=1;i<=4;i++)
scanf("%d",&b[i]);
for(i=1;i<=7;i++)
{
	if(i<=3)
	{
		c[i]=a[i];
	}
	else
	{
		c[i]=b[i-4];
	}

