#include<stdio.h>
int main()
{
int a[5][5],i,j;
printf("enter the value of upper sparse matrix\n");
for(i=1;i<=5;i++)
{
        for(j=1;j<=5;j++)
        {
                if(i>j)
                {
                        a[i][j]=0;
                }
                else
                {
                scanf("%d",&a[i][j]);
                }
        }
}
printf("upper matrix is\n");
for(i=1;i<=5;i++)
{
        for(j=1;j<=5;j++)
        {
                printf("%d\t",a[i][j]);
        }
printf("\n");
}
return 0;
}

