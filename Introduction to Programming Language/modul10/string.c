/* #include <stdio.h>
int main (){
 char str[5];

//  scanf("%s",&str);
//  fgets(str,20,stdin);
char a [5]="Hello";


 printf("%s",a);
 return 0;
} */

// it prints  one extra garbage value; so we can add one extra size for null char

/* #include<stdio.h>
int main()
{
  char a[6]="Hello"; 
  printf("%s",a);
   return 0;
}

 */


//  find string length manually


#include <stdio.h>
#include <string.h>
int main (){
 char str[1001];
 scanf("%s",&str);
// int count=0;
//  for(int i =0; str[i] != '\0' ; i++){
//     count++;
//  }
int count=strlen(str);
 printf("%d",count);

 return 0;
}


