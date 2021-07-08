#include <stdio.h>

int main()
{
   int array[100], pos, i, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter elements\n");

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   printf("Enter the location \n");
   scanf("%d", &pos);

   printf("Enter the value to insert\n");
   scanf("%d", &value);

   for (i= n - 1; i>= pos - 1; i--)
      array[i+1] = array[i];

   array[pos-1] = value;

   printf("Resultant array is\n");

   for (i = 0; i <= n; i++)
      printf("%d\n", array[i]);

   return 0;
}
