#include<stdio.h>
int main()
{
struct student;
{
char *st1name;
char *cname;
int roll_no;
}; 
struct student st; 
printf("\nenter student details");
scanf("%s%s%d",st.st1name,st.cname,&st.roll_no);
printf("\ndisplay student elements");
printf("%s%s%d",st.st1name,st.cname,st.roll_no);
return 0;
}
