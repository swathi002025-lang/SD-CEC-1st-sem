#include<stdio.h>
int main(){
    int num1 = 10, num2 = 6;
    int and_result, or_result;
    and_result = 10 & 6;
    or_result = 10 | 6;

    printf("%d & %d: %d\n",num1, num2, and_result);   
    printf("%d | %d: %d\n",num1, num2, or_result);
}