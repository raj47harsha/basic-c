#include <stdio.h>
int main()
{
  int n;
  printf("enter the number of lines:");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n+1-i; j++)
    {
      printf("* ");
      /* code */
    }
    printf("\n");
    /* code */
  }

  return 0;
}