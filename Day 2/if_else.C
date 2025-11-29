#include<stdio.h>
int main(){
    int num;

    printf("enter any number\n");
    scanf("%d", &num);

    //if statement
    if(num>0){
       printf("%d is positive number!\n",num);
    }

    //if else statement
    if(num>0){
        printf("%d is positive number!\n",num);
    }else{
        printf("%d is negative number!\n",num);
    }

    //if else ladder statement
    if(num>0){
        printf("%d is positive number!\n",num);
    }else if(num<0){
        printf("%d is negative number!\n",num);
    }
    else{
        printf("%d is not a number!\n",num);
    }

    
}