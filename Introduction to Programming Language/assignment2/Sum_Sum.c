#include <stdio.h>
int main (){
 int n;
 int pos=0,neg=0;
 scanf("%d",&n);
int num;

 for (int i =0; i<n; i++){
    scanf("%d",&num);
    if(num>0){
        pos+=num;
    }
    else{
        neg+=num;
    }
}

printf("%d %d" , pos , neg);
 return 0;
}