#include<stdio.h>
int main(){
    int n1, n2, n3;

    printf("enter any 3 numbers: ");
    scanf("%d %d %d",&n1, &n2, &n3);

    //syntax
    //(condition)? true : false

    //check even or odd
    (n1 % 2 == 0)
    ? printf("%d is an even number\n", n1)
    : printf("%d is an odd number\n",n1);

    (n2 % 2 == 0)
    ? printf("%d is an even number\n", n2)
    : printf("%d is an odd number\n",n2);

    (n3 % 2 == 0)
    ? printf("%d is an even number\n", n3)
    : printf("%d is an odd number\n",n3);


    //check greatest of two numbers
    (n1 > n2)
    ? printf("%d is greater then %d\n",n1,n2)
    : printf("%d is lesser than %d\n",n1,n2);

    //check greatest of three numbers (nested ternary operator)
    (n1 > n2)
    ? (n1 > n3)
      ? printf("%d is greater than other two numbers\n",n1)
      : printf("%d is greater than other two numbers\n",n3)
    : (n2 > n3)
      ? printf("%d is greater than other two numbers\n",n2)
      : printf("%d is greater than other two numbers\n",n3);

      //check for greatest of three  (nested ternary operator)
      //syntax
      //(condition1)
      //?(condition1-1) ? True (1-1) : False (1-1)
      //:(condition1-2) ? True (1-2) : False (1-2)
      
 }