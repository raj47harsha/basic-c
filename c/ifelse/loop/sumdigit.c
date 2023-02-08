#include<stdio.h>
int main(){
int n,sum;
sum = 0;
printf("Enter number :");
scanf("%d",&n);
while (n>0){
  sum = sum +(n%10);
  n = n/10;

}printf("sum of digits is %d\n",sum);
return 0;
}