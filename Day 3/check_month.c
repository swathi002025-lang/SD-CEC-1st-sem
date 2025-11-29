#include<stdio.h>
int main(){
    int month;

    printf("enter any number between 1 to 12 :");
    scanf("%d",&month);

    switch(month){
        case 1:
        printf("month 1 : January\n");
        break;
        case 2:
        printf("month 2 : february\n");
        break;
        case 3:
        printf("month 3 : march\n");
        break;
        case 4:
        printf("month 4 : april\n");
        break;
        case 5:
        printf("month 5 : may\n");
        break;
        case 6:
        printf("month 6 : june\n");
        break;
        case 7:
        printf("month 7 : july\n");
        break;
        case 8:
        printf("month 8 : august\n");
        break;
        case 9:
        printf("month 9 : september\n");
        break;
        case 10:
        printf("month 10 : october\n");
        break;
        case 11:
        printf("month 11 : november\n");
        break;
        case 12:
        printf("month 12 : december\n");
        break;
        default:
        printf("invalid month");
        break;


    }
}