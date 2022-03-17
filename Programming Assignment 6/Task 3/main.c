/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 6 Task 3
 * Date:            3/17/2022
 * Description:     Get the avaerage value of a given values
*/

#include <stdio.h>

double get_double();
double average(double sum, int number_of_values);

int main(void){
    int number_of_values;
    double sum = 0;
    puts("How many values are you going to put");
    scanf("%d", &number_of_values);
    for (int i = 0; i < number_of_values; i++){
        puts("Put the next value");
        sum += get_double();
    }
    printf("The average value is %lf", average(sum,number_of_values));
}

double get_double(){
    double x;
    scanf("%lf", &x);
    return x;
}

double average(double sum, int number_of_values){
    return (sum/number_of_values);
}