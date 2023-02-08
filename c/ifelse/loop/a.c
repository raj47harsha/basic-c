#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,n,i;
clrscr();
printf("Enter no. of terms:");
scanf("%d", &n);
printf("The Fibonacci sequence
is:");
printf("%d%d", a,b);
for(i=3;i<=n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
getch();
}
