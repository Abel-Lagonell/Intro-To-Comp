/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 2 Task 1
 * Date:            1/25/2022
 * Description:     This program will compare two integers and print the result of the comparison on the screen   
 */

//Header Files
#include <stdio.h>

//the main function is the entry point of the function
int main(int argc, char **argv){

    int x, // side x 
    y, // side y 
    base, //base 
    height, // height 
    decision, // decision
    total; // total 

    // Ask the user to enter the number on a single line 
    printf("1-Square\n2-Rectangle\n3-Triangle\n\nPlease choose the shape to calculate area for: "); 
    scanf("%d", &decision);

    // Check if they chose the square
    if (decision == 1){
        
        //Ask the user to enter the number for the side of the square
        printf("Enter the side: ");
        scanf("%d", &x);

        total = x*x; //Make total equal to the side length of the square, squared

        printf("The area of the square is %d", total);
    }
    
    // Check if they chose the rectangle
    if (decision == 2){
        
        //Ask the user to enter the number for the side of the rectangle
        printf("Enter the first side and second side seperated by a , (example 3,5) : ");
        scanf("%d,%d", &x, &y);

        total = x*y; //Make total equal to the side length of the rectangle times the other side of the rectangle

        printf("The area of the rectangle is %d", total);
    }

    // Check if they chose the triangle
    if (decision == 3){
        
        //Ask the user to enter the number for the side of the triangle
        printf("Enter the height and the base seperated by a , (example 3,5) : ");
        scanf("%d,%d", &base, &height);

        total = (base*height)/2; //Make total equal to the height of the triangle times the base of the triangle

        printf("The area of the triangle is %d", total);
    }

    return 0; //Inform the operating system that the exit is successful.

}//End of the main function