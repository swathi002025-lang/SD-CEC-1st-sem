// AND (&&), OR (||), NOT(!)

//AND (X):
//A  B  RESULT
//0  0    0
//0  1    0
//1  0    0
//1  1    1

//OR (+):
//A  B  RESULT
//0  0    0
//0  1    1
//1  0    1
//1  1    1

//NOT (TOGGLE):
//A  RESULT
//0    1
//1    0

#include<stdio.h>
int main(){
    int num = 10;
    int num2 = 20;

    //if(10>5){T} && (10<20){T} => (T && T = T)
    if(num > 5 && num <20){
        printf("%d is between 5 and 20\n",num);
    }
    
    //if(20 > 5){T} && (20 < 5){F} => (T && F = F)
    if(num2 > 5 && num2 <20){
        printf("%d is between 5 and 20\n",num2);
    }else{
        printf("%d is not between 5 and 20\n",num2);
    }

    
    if(num2 > 5 || num2 <20){
        printf("%d is between 5 and 20\n",num2);
    }else{
        printf("%d is not between 5 and 20\n",num2);
    }

}
