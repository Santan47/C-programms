#include<stdio.h>
int main()
{
int a[3][3],i,j;
printf("enter the value of lower sparse matrix\n");
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		if(i<j)
		{
			a[i][j]=0;
		}
		else
		{
		scanf("%d",&a[i][j]);
		}
	}
}
printf("array\n");
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		printf("%d\t",a[i][j]);
	}
printf("\n");
}
return 0;
}
