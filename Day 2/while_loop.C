#include<stdio.h>
int main(){
    int num, i = 0;

    printf("enter how many numbers need to be printed :");
    scanf("%d", &num);

    printf("numbers are as follows: \n");
    while(i < num){
        printf("%d\n",i);
        i++;
    }

    //tracing:
    //intial value : i = 1, num = 5
    //i<=num
    //step1: 1<=5 => 5 T
    //print i => 1
    //1
    //i++
}