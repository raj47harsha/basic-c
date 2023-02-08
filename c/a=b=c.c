#include<stdio.h>
int main(){
int length;
printf("enter value of length:");
scanf("%d",&length);
int breadth;
printf("enter value of breadth:");
scanf("%d",&breadth);
int area = length * breadth;
printf("area is equal to %d",area); 
return 0;
}