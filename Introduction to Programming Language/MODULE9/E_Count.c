#include <stdio.h>
int main (){

    char s[1000001];
    scanf("%s" ,s);
    int length = strlen(s);
    int sum = 0;
    for(int i=0 ; i<length ; i++){
      sum += s[i] - '0'; 
    }
    printf("%d",sum);   
 return 0;
}