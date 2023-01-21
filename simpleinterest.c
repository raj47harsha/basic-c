#include<stdio.h>
int main()
{float principle,rate,time,si;
scanf("%f",&principle);
scanf("%f",&rate);
scanf("%f",&time);
si = (principle * rate * time)/100;
printf("Your simple interest is : %f",si);
    return 0;
}