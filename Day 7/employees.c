#include<stdio.h>
#include<string.h>

struct employee{
    int ID;
    char name[25];
    char email[30];
    char dept[20];
    float exp;
    char location[30];
};

void main(){
    struct employee emp[2];

    for(int i=0; i<2; i++){
        printf("enter the details of employee %d\n", i+1);
        printf("enter the employee  ID : \n");
        scanf("%d", &emp[i].ID);
        getchar();
        printf("enter the name : ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        printf("enter the Email ID : ");
        fgets(emp[i].email, sizeof(emp[i].email), stdin);
        printf("enter the department : ");
        fgets(emp[i].dept, sizeof(emp[i].dept), stdin);
        printf("enter the experience : ");
        scanf("%f",&emp[i].exp);
        getchar();
        printf("enter the location : ");
        fgets(emp[i].location, sizeof(emp[i].location), stdin);
    }
        for(int i=0; i<2; i++){
        printf("details of employee %d are as follows : \n", i+1);
        printf("------------------------------------------------------------------------ \n");
        printf(" employee ID : %d\n", emp[i].ID);
        printf(" employee name : %s\n", emp[i].name);
        printf(" employee email ID : %s\n", emp[i].email);
        printf(" employee department : %s\n", emp[i].dept);
        printf(" employee experience : %.2f\n", emp[i].exp);
        printf(" employee location : %s\n", emp[i].location);
    }
}