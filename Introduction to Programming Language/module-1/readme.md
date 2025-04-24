1. Explain why we need long long int data type? 
<!-- * if our input value is greater then 10^9 then we need long long int data type -->

2. Write all the rules for naming a variable in C programming.
<!-- * Names can contain letters, digits and underscores.
* Names must begin with a letter or an underscore (_)
* Names are case-sensitive ( myVar and myvar are different variables)
* Names cannot contain whitespaces or special characters like !, #, %, etc. -->


3. Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.  

<!-- #include <stdio.h>
int main (){
 int a,b;
  scanf("%d %d" ,&a ,&b);

 printf("%d %d" ,b ,a);
 return 0;
} -->

4.  Take a number from user and check if its a even number or odd number.
<!-- #include <stdio.h>
int main (){
 int a;
  scanf("%d" ,&a);
if(a%2==0){
    printf('even');
}
 printf("odd");
 return 0;} -->


5. Take a number from user and check if its a positive or negative number.
<!-- #include <stdio.h>
int main (){
 int a;
  scanf("%d" ,&a);
  if(a<0){
    printf("negative");
   }
else{
    printf("positive");
}
 return 0;
} -->

6. Explain if else ladder.
<!-- * An if-else ladder is used when you want to check multiple conditions one after another. It allows the program to choose one out of many possible blocks of code to execute. -->