#include<stdio.h>
int main(){
    char name[20];
    int size;

    printf("enter the number of characters in your first name : \n");
    scanf("%d", &size);

    printf("enter your name : ");
    for(int i=0; i<size; i++){
        scanf(" %c", &name[i]);
    }

    printf("you have entered : \n");
    for(int i=0; i<size; i++){
        printf(" %c",name[i]);

    }

    //in characters array , we will end it using \0 or null character
    //name[10] = {'s', 'w', 'a', 't', 'h', 'i'}
}