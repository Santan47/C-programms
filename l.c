#include<stdio.h>
int main()
{
int marks;
printf(“Enter marks\n”);
scanf(“%d%”,&marks);
if(marks>=85)
{
printf("\nStudent has got S grade\n");
else if(marks>=75)
printf("\nStudent has got A grade\n");
else if(marks>=65)
printf("\nStudent has got B grade\n");
else if(marks>=55)
printf("\nStudent has got C grade\n");
else if(average>=50)
printf("\nStudent has got D grade\n");
else
printf("\nStudent has got F grade\n");
}
return 0;
}

