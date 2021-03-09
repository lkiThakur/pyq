#include<stdio.h>

int main(void){
struct DATE
{
    int date;
    int month;
    int year;
};
struct DATE d1;
printf("Enter Date month and year of first date\n");
scanf("%d%d%d",&d1.date,&d1.month,&d1.year);

struct DATE d2;
printf("Enter Date month and year of second date\n");
scanf("%d%d%d",&d2.date,&d2.month,&d2.year);

if (d1.year<d2.year)
{
    printf("%d/ %d/ %d is earlier than %d/ %d/ %d ",d1.date,d1.month,d1.year,d2.date,d2.month,d2.year);
}
else if(d1.year>d2.year){
    printf("%d/ %d/ %d is earlier than %d/ %d/ %d ",d2.date,d2.month,d2.year,d1.date,d1.month,d1.year);
}
else if (d1.month<d2.month)
{
    printf("%d/ %d/ %d is earlier than %d/ %d/ %d ",d1.date,d1.month,d1.year,d2.date,d2.month,d2.year);
}
else if(d1.month>d2.month){
    printf("%d/ %d/ %d is earlier than %d/ %d/ %d ",d2.date,d2.month,d2.year,d1.date,d1.month,d1.year);
}
else if (d1.date<d2.date)
{
    printf("%d/ %d/ %d is earlier than %d/ %d/ %d ",d1.date,d1.month,d1.year,d2.date,d2.month,d2.year);
}
else if(d1.date>d2.date){
    printf("%d/ %d/ %d is earlier than %d/ %d/ %d ",d2.date,d2.month,d2.year,d1.date,d1.month,d1.year);
}
return 0;}