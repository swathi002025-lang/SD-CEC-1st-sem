#include<stdio.h>
int main(){
    int age;

    printf("enter your age: ");
    scanf("%d", &age);

    if(age>0){
        if(age>=18){
            printf("you can vote in the election");
        }else{
            printf("you need to grow up to vote");
        }
    }else{
        printf("invalid age!");
    }
}