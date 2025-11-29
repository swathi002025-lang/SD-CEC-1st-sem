#include<stdio.h>
int main(){
    int rows;

    printf("enter the number of rows : ");
    scanf("%d",&rows);

    //top pyramid
    printf("pyramid pattern with star : \n");
    for(int i=1; i<=rows; i++){
        for(int space=1; space<=rows-i; space++){
            printf(" ");
        }for(int j=1; j<=2*i-1; j++){
            printf("*");
        }printf("\n");
    }

     printf("pyramid pattern with i number : \n");
    for(int i=1; i<=rows; i++){
        for(int space=1; space<=rows-i; space++){
            printf(" ");
        }for(int j=1; j<=2*i-1; j++){
            printf("%d",i);
        }printf("\n");
    }

     printf("top pyramid pattern with j number : \n");
    for(int i=1; i<=rows; i++){
        for(int space=1; space<=rows-i; space++){
            printf(" ");
        }for(int j=1; j<=2*i-1; j++){
            printf("%d",j);
        }printf("\n");
    }

    //bottom pyramid
    printf("bottom pyramid pattern with star : \n");
     for(int i=rows-2; i>=1; i=i-2){
        for(int space=1; space<=(rows-i)/2; space++){
            printf("  ");
    }
    for(int j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n");

     }
    }

//tracing
//rows = 3
//step 1 : i=1, i<=rows => 1<=3 - T
//s=1, s<=r-i => 1<=3-1 => 1<=2 - T
//

//step 3 : i=1, i<=rows => 1<=3 - T
//s=1, s<=r-i => 3<=3-1 => 3<=2 - F
//j=1, j<=2*i-1 => 1<= 2*1-1 => 1<=1 - T
//     *

//step 4 : i=1, i<=rows => 1<=3 - T
//s=1, s<=r-i => 3<=3-1 => 3<=2 - F
//j=1, j<=2*i-1 => 2<= 2*1-1 => 2<=1 - F
//     *

//step 5 : i=1, i<=rows => 2<=3 - T
//s=1, s<=r-i => 1<=3-2 => 1<=1 - T
//     *
// 

//step 6 : i=1, i<=rows => 2<=3 - T
//s=1, s<=r-i => 2<=3-2 => 1<=1 - F
//j=1, j<=2*i-1 => 1<= 2*2-1 => 1<=3 - T
//     *
//   *

//step 7 : i=1, i<=rows => 2<=3 - T
//s=1, s<=r-i => 2<=3-2 => 1<=1 - F
//j=1, j<=2*i-1 => 2<= 2*2-1 => 2<=3 - T
//     *
//   * *

//step 8 : i=1, i<=rows => 2<=3 - T
//s=1, s<=r-i => 2<=3-2 => 1<=1 - F
//j=1, j<=2*i-1 => 3<= 2*2-1 => 3<=3 - T
//     *
//   * * *

//step 8 : i=1, i<=rows => 2<=3 - T
//s=1, s<=r-i => 2<=3-2 => 1<=1 - F
//j=1, j<=2*i-1 => 4<= 2*2-1 => 4<=3 - F
//     *
//   * * *

//step 9 : i=1, i<=rows => 3<=3 - T
//s=1, s<=r-i => 1<=3-3 => 1<=0 - F
//j=1, j<=2*i-1 => 1<= 2*3-1 => 1<=5 - T
//     *
//   * * *
// *

//step 10 : i=1, i<=rows => 3<=3 - T
//s=1, s<=r-i => 1<=3-3 => 1<=0 - F
//j=1, j<=2*i-1 => 2<= 2*3-1 => 2<=5 - T
//     *
//   * * *
// * *

//step 11 : i=1, i<=rows => 3<=3 - T
//s=1, s<=r-i => 1<=3-3 => 1<=0 - F
//j=1, j<=2*i-1 => 3<= 2*3-1 => 3<=5 - T
//     *
//   * * *
// * * *

//step 12 : i=1, i<=rows => 3<=3 - T
//s=1, s<=r-i => 1<=3-3 => 1<=0 - F
//j=1, j<=2*i-1 => 4<= 2*3-1 => 4<=5 - T
//     *
//   * * *
// * * * *

//step 13 : i=1, i<=rows => 3<=3 - T
//s=1, s<=r-i => 1<=3-3 => 1<=0 - F
//j=1, j<=2*i-1 => 5<= 2*3-1 => 5<=5 - T
//     *
//   * * *
// * * * * *

//step 13 : i=1, i<=rows => 3<=3 - T
//s=1, s<=r-i => 1<=3-3 => 1<=0 - F
//j=1, j<=2*i-1 => 6<= 2*3-1 => 6<=5 - F
//     *
//   * * *
// * * * * *

//step 14 : i=1, i<=rows => 4<=3 - F
//     *
//   * * *
// * * * * *

//stop












