#include<stdio.h>
int main(){
    float r;
    printf("Enter value of r :");
    scanf("%f", &r);
    float pi = 3.14;

    float area = pi * r * r;
    printf("%f",area );
    return 0;
}