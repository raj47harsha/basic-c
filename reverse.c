#include <stdio.h>
int sum=0,rem;
int reverse_function(int num){
  if(num){
    rem=num%10;
    sum=sum*10+rem;
    reverse_function(num/10);
  }
  else
    return sum;
  return sum;
}
int main(){
  int num,reverse_number;

  //Take the number as an input from user
  printf("Enter any number:");
  scanf("%d",&num);

  //Calling user defined function to perform reverse
  reverse_number=reverse_function(num);
  printf("The reverse of entered number is :%d",reverse_number);
  return 0;
}
Output:
C Program to reverse a given number using Recursive function

Example 2: Program to reverse a number using While loop
In this program, we are reversing the input number using while loop.

#include <stdio.h>
int main()
{
  int num,rem,reverseNum=0;
  //Input number
  printf("Enter an integer number: ");
  scanf("%d",&num);

  while(num>0)
  {
    rem = num%10;
    reverseNum = reverseNum*10 + rem;
    num = num/10;
  }

  printf("Reverse of the entered number is: %d", reverseNum);
  return 0;
}
Output:

Enter an integer number: 8904
Reverse of the entered number is: 4098
Related C Examples:
C Program to calculate area and circumference of circle
C Program to calculate the power of a number
C Program to count number of digits in an integer
C Program to find greatest of three numbers
❮ C TutorialC Programs ❯
POSTED UNDER: C PROGRAMS


Leave a Reply
Your email address will not be published. Required fields are marked *

Comment *

Name *

Email *

Search this website



Programs
C Programs
Java Programs
C++ Programs

