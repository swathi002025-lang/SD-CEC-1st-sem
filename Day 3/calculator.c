#include<stdio.h>
int main(){
    int n1, n2;
    char operator;

    printf("enter any two numbers : \n");
    scanf("%d %d",&n1, &n2);

    printf("choose the operator (+,-,*,/ and %) : \n" );
    scanf(" %c",&operator);

    switch(operator){
        case '+' :
        printf("sum of %d and %d : %d", n1, n2,n1+n2);
        break;
        case '-' :
        printf("difference of %d and %d : %d", n1, n2,n1-n2);
        break;
        case '*' :
        printf("product of %d and %d : %d", n1, n2,n1*n2);
        break;
        case '/' :
        printf("quotient of %d and %d : %d", n1, n2,n1/n2);
        break;
        case '%' :
        printf("remainder of %d and %d : %d", n1, n2,n1%n2);
        break;
        default :
        printf("invalid operator!");
        break;

        
    }
}