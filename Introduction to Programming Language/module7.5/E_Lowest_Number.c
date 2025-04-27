#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[1001];
    int index=1;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    int min = arr[1];

    for (int i = 2; i < n; i++)
    {
      if (arr[i]<min)
      {
        min=arr[i];
        index=i;
      }
    }
    printf("%d %d", min,index);
    return 0;
}