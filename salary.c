#include<stdio.h>

int main(void){
int basicSalary,totalSalary;
printf("Enter Basic Salary\t");
scanf("%d",&basicSalary);
if (basicSalary>=5000)
{
    totalSalary=basicSalary+ 1.1*basicSalary+.2*basicSalary+500;
}
else if (basicSalary>=3000)
{
    totalSalary=basicSalary+ 1*basicSalary+.15*basicSalary+400;
}
else{
totalSalary=basicSalary+.9*basicSalary+.1*basicSalary+300;
}
printf("gross salary is %d\n",totalSalary);
return 0;}