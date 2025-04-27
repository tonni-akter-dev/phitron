#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[100][100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < n; i++)
    {
       int len = strlen(str[i]);
        if (len<=10)
        {
            printf("%s\n",str[i]);
        }
        else{
           printf("%c%d%c\n",str[i][0],len-2,str[i][len-1]);
        }
    }
    return 0;
}