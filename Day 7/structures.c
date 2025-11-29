#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char name[20];
    char branch[20];
    int sem;
    char section;
}s1, s2;

void main(){
    struct student s1, s2;

    s1.id = 1;
    strcpy (s1.name, "swathi");
    strcpy (s1.branch, "CSE");
    s1.sem = 1;
    s1.section = 'C';

    s2.id = 2;
    strcpy (s2.name, "swathi");
    strcpy (s2.branch, "ISE");
    s2.sem = 1;
    s2.section = 'A';

    printf("\ndetails of student 1 are as follows : \n");
    printf("student id : %d\n",s1.id);
    printf("name : %s\n",s1.name);
    printf("branch : %s\n",s1.branch);
    printf("sem : %d\n",s1.sem);
    printf("section : %c\n", s1.section);

    printf("\ndetails of student 2 are as follows : \n");
    printf("student id : %d\n",s2.id);
    printf("name : %s\n",s2.name);
    printf("branch : %s\n",s2.branch);
    printf("sem : %d\n",s2.sem);
    printf("section : %c\n", s2.section);
    
}