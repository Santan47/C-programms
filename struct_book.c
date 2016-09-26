#include<stdio.h>
struct book
{ 
  char name[25];
  float price;
  int pages;
};
struct book b1;
int main()
{
printf("Enter name, price and pages\n");
scanf("\n%s\n%f\n%d",&b1.name,&b1.price,&b1.pages);
printf("\nand this is what you entered");
printf("\n%s\n%f\n%d");
return 0;
}
