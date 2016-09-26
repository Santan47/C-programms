#include<stdio.h>
void input(int*,int,int);
void show(int*,int,int);
main()
{
int a[3][3];
int row=3,col=3;
input((int*)a,row,col);
show((int*)a,row,col);
return 0;
}
void input(int *arr,int r,int c)
{
int i,j;
int*p=(int*)arr;
for(i=0;i<r;i++)
 {
for(j=0;j<c;j++)
   {
printf("\nenter p[%d][%d] element: ",i,j);
scanf("%d",(p+i*c+j));
   }
 }
}
void show(int *arr,int r,int c)
{
int i,j;
int*p=(int*)arr;
printf("\n matrix is \n");
for(i=0;i<r;i++)
 {
for(j=0;j<c;j++)
 printf("%d",*(p+i*c+j));
printf("\n");
}
}

