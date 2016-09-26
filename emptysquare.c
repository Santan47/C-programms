#include<stdio.h>
int main(){
int x,y;
for(x=0;x<10;x++){
for(y=0;y<10;y++)
if(y==0||y==9||x==0||x==9)printf("*");
else printf(" ");
printf("\n");
}
}
