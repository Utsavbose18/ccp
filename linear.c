#include <stdio.h>
int main()
{
  int array[100], search, i, n;

  printf("Enter number of elements \n");
  scanf("%d", &n);

  printf("Enter integer\n", n);

  for (i = 1; i <= n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 1; i <= n; i++)
  {
    if (array[i] == search)
    {
      printf("%d is present at location %d.\n", search, i);
      break;
    }
  }
  if (i == n+1)
    printf("%d isn't present in the array.\n", search);

  return 0;
}
