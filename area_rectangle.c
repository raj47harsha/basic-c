#include<stdio.h>
int main()
{
    float h;
    float w;
    printf("enter the value of h :");
    printf("enter the value of w :");
    
    scanf("%f" ,&h);
    scanf("%f",&w);
    
    float area = h * w;
    printf("%f", area);
    return 0;

}