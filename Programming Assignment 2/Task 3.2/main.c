/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 2 Task 1
 * Date:            1/27/2022
 * Description:     This program will compare two integers and print the result of the comparison on the screen   
 */

//Header Files
#include <stdio.h>

//the main function is the entry point of the function
int main(int argc, char **argv){
    
    int classes,            //The amount of classes the person has.
    gpa;                    //Gpa of the person.
    float runningtotal,     //The numerator of the function
    creditHourTotal,        //The amount of credit hours the person has taken since
    temp;                   //Temporary variable

    //Asks the user how many classes the person has taken.
    puts("Please enter the amount of classes you have, up to 6: ");
    scanf("%d", &classes);

    int creditHour[classes];       //The amount of credithours the class is worth
    float grade[classes];          //The grade in the class

    //checks if the number of classes is greater than 6
    if (classes > 6) {
        puts("The number of classes must be less than 6\nRun the program again.");
    }

    //Where the user is going to input the credit hours and the grade for each class
    for(int i = 0; i < classes; ++i){

        printf("What is the credit hour of class %d? ", i+1);
        scanf("%d", &creditHour[i]);

        printf("What is the grade that you have in class %d? (format: 0.90, 0.85 , 1.00): ", i+1);
        scanf("%f", &grade[i]);
    }

    //Where the calculations are going to be done
    for(int i = 0; i < classes; ++i){
        runningtotal += grade[i] * creditHour[i];
        creditHourTotal += creditHour[i];
    }
    
    //Calculation for the gpa
    temp = (runningtotal/creditHourTotal)*100;
    gpa = temp;

    //Rounding
    if((temp-gpa)/.5 > 1){
        gpa++;
    }
    
    //Find out the letter grade of the student.
    if(gpa >= 90){
        printf("Your gpa is %d percent and that gets you an A average", gpa);
    } 
    else if (gpa >= 80){
        printf("Your gpa is %d percent and that gets you an B average", gpa);
    } 
    else if (gpa >= 70){
        printf("Your gpa is %d percent and that gets you an C average", gpa);
    }
    else if (gpa >= 60){
        printf("Your gpa is %d percent and that gets you an D average", gpa);
    }
    else{
        printf("Your gpa is %d percent and that gets you an F average", gpa);
    }
    
    return 0; //Inform the operating system that the exit is successful.

}//End of the main function