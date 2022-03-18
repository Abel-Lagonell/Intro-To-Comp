/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 6 Task 2
 * Date:            3/17/2022
 * Description:     Draw a Rectangle with given width and height
*/

#include <stdio.h>

void print_rectangle(int width, int height);

void main(void){
    int width, height;
    puts("Enter width and height with a comma to seperate: ");
    scanf("%d,%d", &width,&height);
    print_rectangle(width, height);
}

void print_rectangle(int width, int height){
    for (int i = 0; i < width; i++){
        printf("*");
    }
    for (int i = 2; i < height; i++){
        printf("\n");
        printf("*");
        for (int j = 2; j < width; j++){
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    for (int i = 0; i < width; i++){
        printf("*");
    }
}