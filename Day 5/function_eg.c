#include<stdio.h>

void myCollege(){
    printf("city engineering college\n");
}

//return_type function_name(parameters)
//return_type : void, function_name: myBranch(), parameter : branch
void myBranch(char branch[20]){
    printf("I'm studying at %s branch!\n",branch);
}

void welcome(char fname[20], char lname[20]){
    printf("Hi %s %s , welcome to CEC college\n", fname, lname);
}

void find_sum(int a, int b){
    printf("sum of %d and %d : %d\n",a, b, a+b);
}

void main(){
    myCollege();
    //function call
    //myBranch(argument)
    myBranch("computer science");
    myBranch("information science");
    myBranch("civil engineering");
    welcome("swathi","A");
    welcome("hema","A");
    find_sum(456, 323);
    find_sum(543, 756);

}