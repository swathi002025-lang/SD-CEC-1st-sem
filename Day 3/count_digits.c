#include<stdio.h>
int main(){
    int num,count = 0;

    printf("enter any number: ");
    scanf("%d",&num);
    printf("given number : %d\n",num);

    if(num == 0){
        count = 1;
    }while(num>0){
        count ++;
        num = num/10;
    }
    
    printf("number of digits in a given number : %d", count);
    
}