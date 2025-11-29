#include<stdio.h>
int main(){
    int size, ar[50], largest=0, second=0, smallest=0, avg=0, total = 0;

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

    largest = ar[0];
    for(int i=0; i<size; i++){
        if(ar[i] > largest){
            largest = ar[i];
        }
    }

    smallest = ar[0];
    for(int i=0; i<size; i++){
        total+=ar[i];
        if(ar[i] < smallest){
            smallest = ar[i];
        }
    }

    avg = (total)/size;

    printf("average value from the given array : %d\n",avg);
    printf("largest element in the given array : %d\n",largest);
    printf("smallest element in the given array : %d\n",smallest);
}
