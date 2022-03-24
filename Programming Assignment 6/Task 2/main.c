/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 6 Task 2
 * Date:            3/17/2022
 * Description:     Draw a Rectangle with given width and height
*/

#include <stdio.h>

void print_rectangle(int width, int height);//Prototype of the function

void main(void){
    int width, height;
    puts("Enter width and height with a comma to seperate: ");
    scanf("%d,%d", &width,&height);
    print_rectangle(width, height);
}

//Function to draw a Rectangle with given width and height
void print_rectangle(int width, int height){
    //Print the top of the rectangle
    for (int i = 0; i < width; i++){
        printf("*");
    }
    //Print the sides of the rectangle
    for (int i = 2; i < height; i++){
        printf("\n");
        printf("*");
        for (int j = 2; j < width; j++){
            printf(" ");
        }
        printf("*");
    }
    //Print the bottom of the rectangle
    printf("\n");
    for (int i = 0; i < width; i++){
        printf("*");
    }
}