#include<stdio.h>
int main(){
    int num , i=1, j=1;

    printf("how many even numbers need to be printed:");
    scanf("%d", &num);

    printf("the even numbers till %d are as follows: \n",num);

    //syntax:
    //while(condition){
    //some statements
    //increment or decrement
    //}
    while(i <= num){
        if(i % 2 == 0){
            printf("%d\n",i);
        }
        i++;
    }

    printf("even numbers in reverse order: \n");
    while(num >=j){
        if(num % 2 == 0){
            printf("%d\n",num);
        } 
        num--;
    }

    //tracing
}