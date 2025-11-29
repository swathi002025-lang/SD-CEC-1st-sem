#include<stdio.h>
int main(){
    int n1, n2, n3;

    printf("enter any three numbers: ");
    scanf("%d %d %d",&n1, &n2, &n3);

    if(n1 > n2){
        if(n1 > n3){
            printf("%d is greatest of three numbers",n1);
        }else{
            printf("%d is greatest of three numbers",n3);
        }
    }else{
         if(n2 > n3){
            printf("%d is greatest of three numbers",n2);
        }else{
            printf("%d is greatest of three numbers",n3);
        } 
    }
}