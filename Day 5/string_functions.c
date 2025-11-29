#include<stdio.h>
#include<string.h>
int main(){
    char full_name[20], copy_name[20], fname[20], lname[20], last_name[20];

    printf("enter your name: ");
    fgets(fname, sizeof(fname), stdin);
    fname[(strcspn(fname, "\n"))] = 0;

    printf("your first name is %s\n", fname);

    printf("enter your last name: ");
    fgets(lname, sizeof(lname), stdin);
    lname[(strcspn(lname, "\n"))] = 0;

    printf("your last_name is %s\n",lname);

    //string concatenation => joining two words
    full_name[0] = '\0';
    last_name[0] = '\0';

    strcat(full_name, fname);
    strcat(full_name, "  ");
    strcat(full_name, lname);

    printf("your full name is %s\n", full_name);

    //string length
    printf("ypur name contains %d characters\n", strlen(full_name));

    //string copy
    strcpy(copy_name, full_name );
    printf("copied name : %s\n", copy_name);
}