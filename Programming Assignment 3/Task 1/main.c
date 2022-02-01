/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 3 Task 1
 * Date:            1/31/2022
 * Description:     Transfer the temperature from Fahrenhiet to Celcius
 */

#include <stdio.h>

int main(int argc, char **argv){
    
    float f; // Temperature of Fahrenhiet
    float c; // Temperature of Celcius

    //Ask the user for the temperature in Fahrenheit
    printf("Please enter the temperature in Fahrenheit with one decimal place: ");
    scanf("%f",&f);
    
    //Calculate the temperature in Celsius
    c = (f-32)*(5.0/9);

    //Print the temperature in Celsius
    printf("The temperature in Celsius is %.1f degrees", c);

}