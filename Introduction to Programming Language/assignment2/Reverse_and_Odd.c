#include <stdio.h>
int main (){
 int n;
 scanf("%d",&n);
 int arr[n];
 int arr2[n];
 int totalOdd=0;
 for(int i=0;i<=n-1;i++){
     scanf("%d",&arr[i]);
     if(i%2 !=0){
      arr2[totalOdd]=arr[i];
        totalOdd++;
     }
 }
         for(int j=totalOdd-1; j>=0 ; j--){
             printf("%d ",arr2[j]); 
         };
 return 0;
}