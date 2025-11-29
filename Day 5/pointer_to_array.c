#include<stdio.h>
int main(){
    int a[10] = {5, 10, 15, 20, 25};
    int* aptr = a; 
    //refers to the first element of array 

    int (*arrayptr)[10] = &a;
    //refers to entirs array

    printf("array contains: \n");
    for(int i=0; i<5; i++){
        printf("%d\t",a[i]);
    }

    printf("\nsize iof array: %d\n", sizeof(a));
    printf("\n address of array : %p\n", &a);

    printf("aptr referring to address : %p and address has the value : %d\n", aptr, &aptr);

    printf("array pointer contains : \n");
    for(int i=0; i<5; i++){
        printf("%d",(*arrayptr)[i]);
    }
        printf("\nsecond value of array pointer : %d\n",(*arrayptr)[1]);

        //pointer arthimetic
        printf("value after adding 2 : %d\n",*aptr + 2);
        printf("value of aptr array after adding 2 : %d\n", (*arrayptr)[1]+ 2);
    

    printf("Adding 2 for each values of array pointer : \n");
    for(int i=0; i<5; i++){
        (*arrayptr)[i] = (*arrayptr)[i] + 2;
    }

    printf("after adding array pointer contains : \n");
    for(int i=0; i<5; i++){
        printf("%d\t",(*arrayptr)[i]);
    }
}