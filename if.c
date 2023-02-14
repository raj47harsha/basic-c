#include<stdio.h>
int main(){
int n;
printf("enter number:");
scanf("%d",&n);
if (n<100)      
{printf("n is less than %d",n); 
 

}else if(n==100){
  printf("n is equal to %d",n);

}else 
  printf("n is greater than %d",n);

return 0;
}