#include<stdio.h>
int main(){
    int n = 20;

    int* nptr = &n;

    printf("value of n : %d and address of n : %p\n",n,&n);
    printf("referring address of nptr : %p and nptr refers to value : %d\n",nptr, *nptr);

    *nptr = 30;
    printf(" value of n after changes : %d and address of n : %p\n", n, &n);

    printf("value of n after adding 5 : %d\n", *nptr + 5);

    printf("value of n after subtraction 10 : %d\n", *nptr - 10);

    printf("value of n after multiplying 35 : %d\n", *nptr * 35);

    //pointer arthimetic will refer to the orginal value and
}