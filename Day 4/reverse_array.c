#include<stdio.h>
int main(){
    int size, ar[50], rev[50], copy[50];

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

    
    for(int i=size-1,j=0; i>=0; i--,j++){
            rev[j] = ar[i];
    }

    printf("reversed array elements are as follows : \n");
    for(int i=0; i<size; i++){
        printf("%d\n",rev[i]);
    }

    //copied array
    for(int i=0; i<size; i++){
        copy[i]=ar[i];
    }
    printf("copied array: \n");
    for(int i=0; i<size; i++){
        printf("%d\t",copy[i]);
    }
}

//tracing:
//size/n = 4, ar[50] = {2, 5, 6,1}, rev[50] = {}
//step 1 : i = n-1 => i = 4-1 = 3, j=0, i >= 0 => 3>=0 - T
//rev[j] = ar[i] => rev[0] = ar[3] => rev[0]= 1
//step 2 : i = n-1 => i = 3-1 = 2, j=0, i >= 0 => 2>=0 - T
//rev[j] = ar[i] => rev[0] = ar[2] => rev[1]= 6
//step 3 : i = n-1 => i = 2-1 = 1, j=0, i >= 0 => 1>=0 - T
//rev[j] = ar[i] => rev[0] = ar[1] => rev[2]= 5
//step 4 : i = n-1 => i = 1-1 = 0, j=0, i >= 0 => 0>=0 - T
//rev[j] = ar[i] => rev[0] = ar[0] => rev[3]= 2
//step 5 : i = n-1 => i = 0-1 = 1, j=0, i >= 0 => -1>=0 - F
//stop
//reverse = 1 6 5 2




