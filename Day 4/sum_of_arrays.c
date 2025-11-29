#include<stdio.h>
int main(){
    int size, ar[50], sum;
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

    for(int i=0; i<size; i++){
        sum+=ar[i];
    }
    printf("the sum of arrays elements : %d", sum);

    //tracing :
    //n=5, ar[10]= {2,3,4,5,6}
    //step 1 : i=0, i<n => 0<5 - T
    //sum+=ar[i] => 0 + ar[0] => 0+2=2
    //step 2 : i=0, i<n => 1<5 - T
    //sum+=ar[i] => 2 + ar[1] => 2+3=6
    //step 3 : i=0, i<n => 2<5 - T
    //sum+=ar[i] => 6 + ar[2] => 6+4=10
    //step 4 : i=0, i<n => 3<5 - T
    //sum+=ar[i] => 10 + ar[3] => 10+5=15
    //step 5 : i=0, i<n => 4<5 - T
    //sum+=ar[i] => 15 + ar[4] => 15+6=21
    //step 1 : i=0, i<n => 5<5 - F
    //stop

}