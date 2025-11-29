#include<stdio.h>

//syntax:
//return_type function_name(parameters){
//}

//function declaration
//ex : void say hi

//function definition
//ex : void say_hi(){
//printf("hi students!");
//}

//function call
//ex : say_hi()

void greet(){
    printf("good morning myself!\n");
}
void say_hello();

void main(){
    greet();
    say_hello();
}

void say_hello(){
    printf("hello world!\n");
}

//purpose of function is to write once and use multiple times
