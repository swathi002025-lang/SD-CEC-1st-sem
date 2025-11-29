#include<stdio.h>
int main(){
    int rows;
    printf("enter the number of rows : ");
    scanf("%d", &rows);

    printf("right angled triangle pattern : \n");
    for(int i = 1;i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("$");
        }
        printf("\n");  
    }

    printf("right angled triangle pattern : \n");
    for(int i = 1;i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");  
    }

    printf("right angled triangle pattern : \n");
    for(int i = 1;i<=rows; i++){
        for(int j=1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");  
    }
}

//tracing
//rows = 3
//step 1 : i = 1, i <= rows, 1 <= 3 - T
//j = 1, j <= i, 1 <= 1 - T
//$
 
//step 2 : i = 1, i <= rows, 1 <= 3 - T
//j = 1, j <= i, 2 <= 1 - F
//$

//step 3 : i = 1, i <= rows, 2 <= 3 - T
//j = 1, j <= i, 1 <= 2 - T
//$
//$

//step 4 : i = 1, i <= rows, 2 <= 3 - T
//j = 1, j <= i, 2 <= 2 - T
//$
//$ $

//step 5 : i = 1, i <= rows, 2 <= 3 - T
//j = 1, j <= i, 3 <= 2 - F
//$
//$ $

//step 6 : i = 1, i <= rows, 3 <= 3 - T
//j = 1, j <= i, 1 <= 3 - T
//$
//$ $
//$

//step 7 : i = 1, i <= rows, 3 <= 3 - T
//j = 1, j <= i, 2 <= 3 - T
//$
//$ $
//$ $

//step 8 : i = 1, i <= rows, 3 <= 3 - T
//j = 1, j <= i, 3 <= 3 - T
//$
//$ $
//$ $ $

//step 9 : i = 1, i <= rows, 3 <= 3 - T
//j = 1, j <= i, 4 <= 3 - F
//$
//$ $
//$ $ $
//stop