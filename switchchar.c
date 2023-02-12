#include<stdio.h>
int main(){
char c;
printf("input character:");
scanf("%c",&c);
switch (c)
{
case 'a':
case 'e':
case 'i':

  printf("it is vowel");
  break;

default:
  break;
}
return 0;
}