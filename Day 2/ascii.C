//ctrl + shift + ~ = open termainal
#include<stdio.h>
int main(){
    char ch;
    char start, end;

    printf("enter starting character :");
    scanf(" %c", &start);

    printf("enter ending character :");
    scanf(" %c",&end);

    printf("character from %c to %c: \n", start,end);

    for(ch = start ; ch<=end; ch++){
        printf("%c \t %d \n", ch, ch);
    }
}