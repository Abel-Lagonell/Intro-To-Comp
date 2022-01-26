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
    int a; // first number 
    int b; // second number 
 
    // Ask the user to enter the numbers on a single line and separate them by a coma 
    printf("Enter the first number and second number separated by a , (example 3,5) : "); 
    scanf("%d,%d", &a, &b); 
 
    // Check if a is equal to b and then print the result 
    if (a==b){ 
        printf("a is equal to b"); 
    } 
 
    // Check if a is equal to b and then print the result 
    if (a!=b){ 
        printf("a is not equal to b"); 
    } 

    return 0; //Inform the operating system that the exit is successful.

}//End of the main function