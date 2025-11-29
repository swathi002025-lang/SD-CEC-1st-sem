#include<stdio.h>
int main(){
    int choice;

    do{
    printf("Choose any of the option : \n");
    printf("1. Welcome!\n");
    printf("2. Good morning!\n");
    printf("3. Good afternoon!\n");
    printf("4. Good night!\n");
    printf("5. Good bye!\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Welcome to c programming IRP\n");
        break;
        case 2:
        printf("Good morning students\n");
        break;
        case 3:
        printf("Good afternoon students\n");
        break;
        case 4:
        printf("Good night students\n");
        break;
        case 5:
        printf("Good bye students!\n");
        break;
        default:
        printf("invalid choice\n");
        break;
    }
}while(choice <= 5);
}