#include<stdio.h>
int main(){
    int num , i=1, j=1;

    printf("how many odd numbers need to be printed:");
    scanf("%d", &num);

    printf("the odd numbers till %d are as follows: \n",num);
    while(i <= num){
        if(i % 2 != 0){
            printf("%d\n",i);
        }
        i++;
    }

    printf("odd numbers in reverse order: \n");
    while(num >=j){
        if(num % 2 != 0){
            printf("%d\n",num);
        } 
        num--;
    }

}