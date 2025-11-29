#include<stdio.h>
int main(){
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;

    printf("sum of %d and %d:%d\n", num1, num2, sum);
    printf("difference of %d and %d:%d\n", num1, num2, num1 - num2);
    printf("product of %d and %d: %d\n", num1, num2, num1 * num2);
    printf("division of %d and %d: %d\n", num1, num2, num1 / num2);
    printf("modulus of %d and %d: %d\n", num1, num2, num1 % num2);
}