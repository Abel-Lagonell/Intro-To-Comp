/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 7 Task 2
 * Date:            3/17/2022
 * Description:     Print various values of the variable i.
*/

#include <stdio.h>

int print_digits(int number);

int main(void){
    int num = 24746;
    print_digits(num);
}

int print_digits(int number){
    if(number < 10) {
        return number;
    }
    int num = print_digits(number/10);
    if(number/10.0>1.0){
        printf("%d\n", number);
        printf("ran\n");
    } else {
        printf("%d\n", number/10%10);
    }
    return num;
}