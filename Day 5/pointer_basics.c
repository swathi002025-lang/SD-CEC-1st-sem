#include<stdio.h>
int main(){
    int num = 50;

    //normal pointer(integer pointer)
    int* numptr = &num;

    // double pointer or pointer to pointer
    int** dptr = &numptr;

    *numptr = 20;
    printf("num value :%d and it is present at : %p\n",num, &num);
    printf("numptr refers to : %p and it has value : %d and it is present at : %p \n", numptr, *numptr, &numptr);
    printf("dptr refers to : %p and it has value : %d\n",dptr,*dptr);
    printf("dptr can directly access a num value : %d",**dptr);
}

//variable = value [address]
//num = 50[1000]

//numptr => num
//numptr = 1000[1100]

//numptr => 1000(address of num), *numptr => 50 (value of num)

//dptr => numptr
//dptr = 1100[1200]

//dptr => 1100(address of numptr),
//*dptr => 1000(address refered by numptr)
//**dptr = 50 (value refered by numptr or value of num)