#include <stdio.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d", &n);
    char str[10001];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);

        int capital = 0;
        int small = 0;
        int num = 0;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                capital++;
            }
            else if (str[j] >= 'a' && str[j] <= 'z')
            {
                small++;
            }
            else if (str[j] >= '0' && str[j] <= '9')
            {
                num++;
            }
        }

        printf("%d %d %d\n", capital, small, num);
    }

    return 0;
}