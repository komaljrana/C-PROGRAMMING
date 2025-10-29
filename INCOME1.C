#include<stdio.h>
int main()
{
int age,income;
printf("enter the age:");
scanf("%d",&age);
printf("enter the amount of income:");
scanf("%d",&income);
if(age>=21){
if(income>=3000){
printf("eligible for loan\n");
}
else{
printf("not eligible");
}
}
getch();
return 0;
}