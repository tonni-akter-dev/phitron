#include <stdio.h>
int main (){
 int n;
 scanf("%d",&n);
 for(int i =0; i<n; i++){
     int num;
     scanf("%d",&num);
     long long fact=1;
     if(num==0){
         fact=1;
        }
     else{
         for(int j=1;j<=num;j++){
             fact *=j;
         }
     }
        printf("%lld\n",fact);
}
 return 0; 
}