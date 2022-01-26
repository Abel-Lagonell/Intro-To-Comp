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
    
    int amountOfClasses;    //Keeps track of the number of classes
    double runningTotal;    //The running Total number of grade * credit hour
    int runningTotalCH;     //The running total number of credit hours

    printf("How many classes do you have? Enter a number: ");
    scanf("%d",&amountOfClasses);
    printf("\nYou have inputed %d amount of classe(s).\n", amountOfClasses);

    double grade [amountOfClasses-1]; //The grade in the given class
    int creditHours [amountOfClasses-1]; //The credit hour that the class is worth

    for (int i = 0; i < amountOfClasses; i++ ){
        
        printf("\nHow many credit hours is the class worth. Enter a number: ");
        scanf("%d", &creditHours[amountOfClasses]);
        
        printf("\nWhat grade did you get in the class? Enter a decimal");
        scanf("%d", &grade[amountOfClasses]);
    }
    
    for (int i = 0; i < amountOfClasses; i++ ){
        runningTotal += creditHours[i] *grade[i];
        runningTotalCH += creditHours[i];
    }

    return 0; //Inform the operating system that the exit is successful.

}//End of the main function