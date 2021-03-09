#include<stdio.h>

int main(void){
int swap(int *x,int *y){
    *x=*x+*y;
    // printf("address of a is %p",x);
    *y=*x-*y;
    *x=*x-*y;
return 0;}
int a=5;
int b=9;
printf("before swapping a is %d and b is %d\n",a,b);
swap(&a,&b);
printf("After swaapping a is %d and b is %d\n",a,b);
return 0;}