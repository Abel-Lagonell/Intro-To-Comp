/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 8 Task 1
 * Date:            4/9/2022
 * Description:     Calculating salaries.
*/

#include <stdio.h>

//Prototyping the functions
void printArray(int *a, size_t col);
void multiplyArray(int *a, size_t col);

int main(){
    //Initilization of the array
    int salaries[5] = {1500, 3000, 2500, 3300, 5000};
    
    //Printinf out the salary information
    puts("Before the Raise:");
    printArray(salaries, 5);
    multiplyArray(salaries, 5);
    puts("\nAfter the Raise:");
    printArray(salaries, 5);

    return 0;
}

void printArray(int *a, size_t col){
    for (int j = 0; j < col; j++){
        printf("%5d ", a[j]);
    }
}

void multiplyArray(int *a, size_t col){
    for (int j = 0; j < col; j++){
        a[j] *= 1.05;
    }
}