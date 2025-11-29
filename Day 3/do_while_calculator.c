#include<stdio.h>
int main(){
    int operation;
    int n1, n2;

    printf("enter any two numbers :");
    scanf("%d %d", &n1, &n2);

    do{
    printf("select any operation : ");
    printf("1. addition \n");
    printf("2. subtraction\n");
    printf("3. multiplication \n");
    printf("4. quotient \n");
    printf("5. remainder \n");
    printf("6. exit \n");
    scanf("%d", &operation);

    switch(operation){
        case 1 :
        printf("sum of %d and %d :%d\n9", n1, n2,n1+n2);
        break;
        case 2 :
        printf("difference of %d and %d :%d\n", n1, n2,n1-n2);
        break;
        case 3 :
        printf("product of %d and %d :%d\n", n1, n2,n1*n2);
        break;
        case 4 :
        printf("quotient of %d and %d :%d\n", n1, n2,n1/n2);
        break;
        case 5 :
        printf("remainder of %d and %d :%d\n", n1, n2,n1%n2);
        break;
        case 6 :
        printf("thank you for using this calculator!\n");
        break;
        default :
        printf("invalid operator!");
        break;
    }
}
    while(operation <= 6);

}

