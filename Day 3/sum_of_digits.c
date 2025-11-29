#include<stdio.h>
int main(){
    int num, sum = 0;

    printf("enter any number: ");
    scanf("%d",&num);
    printf("original number : %d",num);

    while(num>0){
        sum = sum + num % 10;
        num = num / 10;
    }

    printf("sum of the given digits: %d", sum);

    // Tracing:
// num = 13579 (n)
// sum = 0 (s)
// Step 1: 13579 > 0 - T
// s = s + n % 10 => s = 0 + 13579 % 10 => 0 + 9 = 9
// n = 13579 / 10 => 1357
// Step 2: 1357 > 0 - T
// s = 9 + 1357 % 10 => 9 + 7 = 16
// n = 1357 / 10 => 135
// Step 3: 135 > 0 - T
// s = 16 + 135 % 10 => 16 + 5 = 21
// n = 135 / 10 => 13
// Step 4: 13 > 0 - T
// s = 21 + 13 % 10 => 21 + 3 = 24
// n = 13 / 10 => 1
// Step 5: 1 > 0 - T
// s = 24 + 1 % 10 => 24 + 1 = 25
// n = 1 / 10 => 0
// Step 6: 0 > 0 - F
// STOP
// Sum = 25

}