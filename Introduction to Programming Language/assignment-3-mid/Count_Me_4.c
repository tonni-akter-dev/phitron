#include <stdio.h>
int main()
{
    char str[10001];
    scanf("%s", str); 
    int count[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { 
            count[str[i] - 97]++; 
        }
    }

    for (int i = 0; i < 26; i++) {
        if(count[i]==0){
            continue;
        }
        printf("%c - %d\n", 'a' + i, count[i]); 
    }

    return 0;
}