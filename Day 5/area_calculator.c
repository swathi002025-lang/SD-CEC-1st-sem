#include<stdio.h>

int find_square_area(int length){
    return length * length;
}

int find_rectangle_area(int length, int breadth){
    return length * breadth; 
}

int find_cube_area(int length, int breadth, int height){
    return length * breadth * height;
}

void main(){
    printf("area of square 1: %d\n", find_square_area(123));
    printf("area of square 2: %d\n", find_square_area(344));

    printf("area of rectangle 1: %d\n",find_rectangle_area(20, 78));
    printf("area of rectangle 2: %d\n",find_rectangle_area(80, 90));

    printf("area of cube 1: %d\n",find_cube_area(25, 45, 67));
    printf("area of cube 2: %d\n",find_cube_area(45, 56, 97));

}