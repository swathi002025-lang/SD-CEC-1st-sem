#include<stdio.h>
int main(){
    int day;

    printf("enter any number between 1 to 7: ");
    scanf("%d",&day);

    //for checking multiple conditions we use switch statements

    //why break is needed for each case
    //to stop the iteration for the respective case
    // If we don't use break, the statement will continue and doesn't stop

    switch(day){
        case 1:
        printf("Day 1 : Monday\n");
        break;
        case 2:
        printf("Day 2 : tuesday\n");
        break;
        case 3:
        printf("Day 3 : Wednesday\n");
        break;
        case 4:
        printf("Day 4 : thursday\n");
        break;
        case 5:
        printf("Day 5 : friday\n");
        break;
        case 6:
        printf("Day 6 : saturday\n");
        break;
        case 7:
        printf("Day 7 : sunday\n");
        break;
    }
}