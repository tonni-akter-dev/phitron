#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr3[n];
    int isPalindrome = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        arr3[i] = arr[n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr3[i])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}