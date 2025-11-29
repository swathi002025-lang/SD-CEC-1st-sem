#include<stdio.h>
#include<string.h>
int main(){
    char name[20], full_name[30], complete_name[30];

    printf("enter your name : ");
    scanf("%s", &name);

    printf("your first name is %s\n",name);

    printf("enter your full name : ");
    getchar();
    gets(full_name);

    printf("your full name is %s\n",full_name);

    printf("enter your complete name again: ");
    //syntax for fgets:
    //fgets(array, sizeof(array), stdin)
    fgets(complete_name, sizeof(complete_name), stdin);

    printf("size of complete name array is %d\n",sizeof(complete_name));

    printf("your complete name is %s\n", complete_name);



}