#include<stdio.h>
int main(){

    //Arrays in C are collections of elements of the same data type stored in 
    // contiguous memory locations, accessed using indices starting from 0.
    // They allow you to efficiently manage multiple values under a single variable 
    // name instead of declaring many separate variables.



    int ar[5];

    printf("enter any 5 elements :");
    for(int i=0; i<5; i++){
        scanf("%d",&ar[i]);
    }

    printf("the array elements are as follows : \n");
    for(int i=0; i<5; i++){
        printf("element %d : %d\n",i, ar[i]);
    }
}