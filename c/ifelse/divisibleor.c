#include<stdio.h>
int main(){
int n;
printf("enter a number :");
scanf("%d",&n);
if(n%3==0 || n%5==0){
    printf("number is divisible by 3 and 5");
}
else{
    printf("number is not by 3 and 5");
}
return 0;
}