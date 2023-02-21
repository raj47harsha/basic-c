#include <stdio.h>
int main()
{
  int i, j, k, row;
  printf("enter the number of rows :");
  scanf("%d", &row);
  for (i = 1; i <= row; i++)
  {
    for (j = 1; j <= 2*i - 1; j++)
    {
      printf(" * ");
    }
    for (k = 1; k <= row - i; k++)
    {
      printf("");
    }

    printf("\n");
  }

  return 0;
}