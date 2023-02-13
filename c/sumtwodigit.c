#include<stdio.h>
int main(){
int a,b,c,sum;
printf("enter two digit number:");
scanf("%d",&a);
b = a/10;
c = a%10;
sum = b + c;
printf("the sum of two digit is %d",sum);
return 0;
}