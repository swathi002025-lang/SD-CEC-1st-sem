#include<stdio.h>
int main(){
    int i = 20;
    float f = 1.45;
    char ch = 'A';

    //pointer declaration
    //syntax: data type* pointer;
    int* iptr;
    float* fptr;
    char* cptr;

    //iptr will refer the address of integer i
    iptr = &i;
    fptr = &f;
    cptr = &ch;

    printf("variable i contains value : %d\n", i);
    printf("variable i is present at :%p\n", &i);
    printf("iptr refers to: %p\n",iptr);
    printf("iptr contains: %d\n",*iptr);
    printf("iptr is present at: %p\n",&iptr);

    printf("\nvariable f contains value : %f\n", f);
    printf("variable f is present at :%p\n", &f);
    printf("fptr refers to: %p\n",fptr);
    printf("fptr contains: %f\n",*fptr);
    printf("fptr is present at: %p\n",&fptr);

    printf("\nvariable c contains value : %c\n", ch);
    printf("variable c is present at :%p\n", &ch);
    printf("cptr refers to: %p\n",cptr);
    printf("cptr contains: %c\n",*cptr);
    printf("cptr is present at: %p\n",&cptr);


}