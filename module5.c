// Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".
/* 
#include <stdio.h>
int main (){
 int a,b;
 scanf("%d %d",&a ,&b);
if(a>=b){
    printf("Yes");
}
else{
    printf("No");
}
 return 0;
} */


// 2. Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".


/* #include <stdio.h>
int main (){
    int a,b;
    scanf("%d %d",&a ,&b);
    if(a%b==0 || b%a==0){
        printf("Multiples");
    }
    else{
        printf("No Multiples");
    }
 return 0;
}
 */



//  3.Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

/*  #include <stdio.h>
int main (){
    int a;
    scanf("%d" ,&a);
    int digit=a/1000;

    if(digit%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
 return 0;
} */


// 4.Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
/* 
#include <stdio.h>

int main (){
 char x;
 scanf("%c",&x);

 if(x >= 'A' && x <= 'Z')
 {
   x=x+32;
printf("%c" ,x);
}
 else if(x >= 'a' && x <= 'z')
 {
    x=x-32;
    printf("%c" ,x);
 }
 return 0;
}
 */

/* 
#include <stdio.h>
#include <ctype.h>
int main (){
 char x;
 scanf("%c",&x);

 if(x >= 'A' && x <= 'Z')
 {
    printf("%c",tolower(x));
 }
 else if(x >= 'a' && x <= 'z')
 {
    printf("%c", toupper(x));
 }

 return 0;
} */



// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
/* 
#include <stdio.h>
int main (){
 char ch;
 scanf("%c" ,&ch);

 if(ch>='0' &&  ch<='9'){
printf("IS DIGIT");
 }
 else{
    printf("ALPHA\n");
    if(ch>='a' &&  ch<='z'){
        printf("IS SMALL");
    }else{
             printf("IS CAPITAL");

         }
 }
 return 0;
}
 */


//  Given 3 numbers A, B and C, Print the minimum and the maximum numbers.


/* #include <stdio.h>
int main (){
 int a,b,c;
 scanf("%d %d %d", &a ,&b ,&c);

//  min
if(a<=b && a<=c){
    printf("%d " , a);
 }
else if(b<=a && b<=c){
    printf("%d " , b);
}
else 
{
    printf("%d ",c);
}

//  max
 if(a>=b && a>=c){
    printf("%d " , a);
 } 
else if(b>=a && b>=c){
    printf("%d " , b);
}
else 
{
    printf("%d ",c);
}

 return 0;
}
 */


//  quiz--------------------
/* #include <stdio.h>
int main (){
    int a,b,c;
    scanf("%d %d %d", &a ,&b ,&c);
if(a>b && b>c){
    printf("%d",a);
}
else if(b>a && c>b){
    printf("%d",b);
}
else{
    printf("%d",c);
    
}


 return 0;
}

 */
//  quiz--------------------




// extra module practive
// 1.Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

#include <stdio.h>
int main (){
 int x ,y;
 scanf("%d %d",&x,&y);

printf("%d + %d = %d\n",x,y,x+y);
printf("%d * %d = %d\n",x,y,x*y);
printf("%d - %d = %d\n",x,y,x-y);
 return 0;
}


// Given four numbers A, B, C and D. Print the result of the following equation :
//  X = (A * B) - (C * D).

/* #include <stdio.h>
int main (){
 int a ,b,c,d;
 scanf("%d %d",&a,&b,&c,&d);

printf("Difference = %d",
    ((a*b)-(c*d)));
 return 0;
} */

// extra module practive
