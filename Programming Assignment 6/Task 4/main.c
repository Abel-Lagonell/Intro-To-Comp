/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 6 Task 3
 * Date:            3/17/2022
 * Description:     Tells if a number is a perfect square;
*/

#include <stdio.h>
#include <math.h>

int is_perfect_square(int x);

int main(void){
    for (int i=2; i<=50; i++){
        printf("%d\n", is_perfect_square(i));
    }
}

int is_perfect_square(int x){
    double y = x;
    x = sqrt(x);
    y = sqrt(y);
    if(y==x) return 1;
    else return 0;
}                                                                                                                                  