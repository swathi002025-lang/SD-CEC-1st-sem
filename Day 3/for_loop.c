#include<stdio.h>
int main(){
    int num,i;

    printf("enter any number : ");
    scanf("%d", &num);

    //syntax:
    //for (intialization; condition; increment/decrement)

    printf("the numbers from 0 to %d:\n", num);
    for(int i=0; i<=num; i++){
        printf("%d\n",i);
    }
}