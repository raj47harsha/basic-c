#include<stdio.h>
int main(){
float eng,maths,science,social,geography;
float total,average,percentage;
printf("enter marks of five subjects : ");
scanf("%f%f%f%f%f",&eng,&maths,&science,&social,&geography);
total = eng + maths + science + social + geography;
average = total / 5;
percentage = average;
printf("total marks : %f\n",total);
printf("average marks : %f\n",average);
printf("percentage marks : %f\n",percentage);

return 0;
}