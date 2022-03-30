/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 7 Task 2
 * Date:            3/17/2022
 * Description:     Print Sig Figs in order of importance
*/

#include <stdio.h>

int print_digits(int number);

int main(void){
    int x;
    puts("Enter a number: ");
    scanf("%d",&x);
    print_digits(x);

}

int print_digits(int number){
    int num;
    
    if (number > 10){
        num = print_digits(number/10);
        printf("%d\n", number%10);
        return num;
    }
    if(number < 10) {
        printf("%d\n", number%10);
        return number;
    }
}