/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 6 Task 1
 * Date:            3/17/2022
 * Description:     Print Hello 4 times
*/

#include <stdio.h>

void print_hello(); //Prototype of Function

int main (void){
    print_hello();
    print_hello();
    print_hello();
    print_hello();
    return 0;
}

//Function that prints hello
void print_hello(){
    puts("Hello");
}