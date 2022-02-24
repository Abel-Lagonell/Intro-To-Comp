/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 5 Task 3
 * Date:            2/23/2022
 * Description:     Write the word form of the given number
 */

#include <stdio.h>

int main(void){

    int n = 0;  //Number to be inputted by user

    do{

        //Read the numbers from right to left and convert them into word form
        while (n != 0){
            switch (n % 10){
            case 1:
                puts("one");
                break;
            case 2:
                puts("two");
                break;
            case 3:
                puts("three");
                break;
            case 4:
                puts("four");
                break;
            case 5:
                puts("five");
                break;
            case 6:
                puts("six");
                break;
            case 7:
                puts("seven");
                break;
            case 8:
                puts("eight");
                break;
            case 9:
                puts("nine");
                break;
            }

            n /= 10;
        }
        
        //User input is here so that the last thing from the while loop does not affect the user
        puts("Please enter a number: ");
        scanf("%d", &n);

    } while (n > 0);//Ending condition of the while loop.

    return 0;
}