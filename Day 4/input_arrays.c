#include<stdio.h>
int main(){
    int size, ar[50];

   printf("enter the number of elements : ");
    scanf("%d", &size);

    printf("enter any %d elements : ",size);
    for(int i=0; i<size; i++){
        scanf("%d", &ar[i]);
    }

    printf("the array elements are as follows: \n");
    for(int i=0; i<size; i++){
        printf("%d\n", ar[i]);
    }
}