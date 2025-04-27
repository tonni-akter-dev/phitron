// Take an array from input and print all the even numbers of that array.

/* #include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
 int arr[n];
  for(int i =0; i<n; i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0){

        printf("%d\n",arr[i]);
    }
  }
 return 0;
}
 */

// Take an array from input and count how many odd numbers are present in that array.
/* #include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
 int arr[n];
 int sum=0;
  for(int i =0; i<n; i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2 != 0){
        sum++;
    }
}
printf("%d\n",sum);
 return 0;
}
 */
// SUM OF THE ARRAY VALUE
/* #include <stdio.h>
int main (){
 int n;
 scanf("%d",&n);

 int arr[n];
 for(int i=0; i<n; i++){
scanf("%d" ,&arr[i]);
 }
 int sum=0;
 for(int i=0; i<n; i++)
{
    sum +=arr[i];
}
printf("%d",sum);
 return 0;
}

 */
// Take an array from input and print the maximum value of that array.
/* 
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
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]> max){
            max=arr[i];
        }        
    }
    printf("%d", max);
    return 0;
} */

// Take an array from input and print the minimum value of that array.

/* 
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
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]< min){
            min=arr[i];
        }        
    }
    printf("%d", min);
    return 0;
} */