#include<stdio.h>
int main(){
int a;
printf("enter first number :");
scanf("%d",&a);
int b;
printf("enter second number :");
scanf("%d",&b);
int c;
printf("enter third number :");
scanf("%d",&c);
if(a>b && a>c){
    printf("%d is greater than b and c",a);
}
if(b>a && b>c){
    printf("%d is greater than a and c",b);
}
if(c>b && c>a){
    printf("%d is greater than a and b",c);
}
return 0;
}