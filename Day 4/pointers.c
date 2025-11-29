#include<stdio.h>
int main()[

    //pointer
    //In simple words: A pointer in C is a special variable that stores 
    // the memory address of another variable instead of storing 
    // the actual value.

    int i = 5;
    //integer pointer variable
    int* ptr;
    int** ptr
    //referring the address of i
    //referencing 
    ptr = &i;

    printf("the value in i is : %d\n",i);
    printf("the address of i is : %p\n", &i);
    //*ptr is called as de-referencing the pointer
    printf("pointer ptr contains : %p\n", ptr);
    printf("pointer value contains : %d\n",ptr);
    printf("address of the pointer : %p\n",&ptr);

    *ptr = 10;
    printf("the value in i is : %d\n",i);

]