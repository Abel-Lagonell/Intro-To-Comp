/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 3 Task 2
 * Date:            1/31/2022
 * Description:     Calculate the slope and y intercept
 */

#include <stdio.h>

int main(int argc, char **argv){

    float x1,
    y1, 
    x2, 
    y2,
    m,          //Slope
    b;          //y intercept

    //Get user input of the two coordinates
    puts("Please enter the two points in the format ( x1 , y1 ),( x2 , y2 ): ");
    scanf("%*c%f%*c%f%*c%*c%*c%f%*c%f%*c", &x1, &y1, &x2, &y2);
    
    //Calculate slope and y intercept
    m = (y2 - y1)/(x2 - x1);
    b = y1 - m * x1;
    
    //Show the slope and y intercept
    printf("The slope is %.2f and the y intercept is %.2f\n", m, b);
    printf("Making the equation: y = %.2fx + ( %.2f )", m, b);

}