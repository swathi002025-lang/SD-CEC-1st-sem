#include<stdio.h>
int main(){
    int num;
    float decimal;
    char symbol;

    printf("Enter any integer value = ");
    //for taking input , we use scanf
    //= & - amperstand, it will store the address of the variable
    scanf("%d",&num);
    printf("Enter any decimal value = ");
    scanf("%f",&decimal);
    printf("Enter any symbol = ");
    //we should gave space before writing %c
    //because first it takes enter as a value then we can enter the value
    scanf(" %c",&symbol);

    printf("you've given %d for integer\n",num);
    printf("you've given %f for decimal\n",decimal);
    printf("you've given %c for symbol\n",symbol);

}