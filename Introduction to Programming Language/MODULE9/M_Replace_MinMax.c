#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   int min =arr[0];
   int max = arr[0];

   int minIndex = 0 ;
   int maxIndex = 0;
   for (int i = 1; i < n; i++)
   {
      if (arr[i] > max)
      {
         max = arr[i];
         maxIndex = i;
      }
      else if (arr[i] < min)
      {
         min = arr[i];
         minIndex = i;
      }
   }
   for (int i = 0; i < n; i++)
   {
      arr[minIndex] = max;
      arr[maxIndex] = min;
      printf("%d ", arr[i]);
   }

   return 0;
}