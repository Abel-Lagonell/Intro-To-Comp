/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 4 Task 1
 * Date:            2/13/2022
 * Description:     Make a table of Fahrenheit to Celsius to Kelvin
 */

#include <stdio.h>

int main(void){

    int f = -30;//Fahrenheit
    double c,   //Celsius
    k;          //Kelvin

    //Format the columns
    puts("Fahrenheit\tCelsius  \tKelvin");
    puts("==========\t=======  \t======");

    //Calculate and Place the rest of the values
    while(f<=150){

        //Calculation for Celsius and Kelvin
        c = ( f - 32 ) * ( 5.0 / 9.0 );
        k = c + 273.15;

        //Format
        printf("%d\t\t%.1lf\t\t%.3lf\n", f,c,k);

        f += 5;
    }

    return 0;
}