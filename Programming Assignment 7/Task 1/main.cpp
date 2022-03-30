/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 7 Task 1
 * Date:            3/17/2022
 * Description:     Print various values of the variable i.
*/

#include <stdio.h>
#include <math.h>

int main(void){
    printf("   x     sin(x)  cos(x)  tan(x)  exp(x)  log(x)\n");
    printf("------- ------- ------- ------- ------- -------\n");
    for(double i = -M_PI; i <= M_PI; i += M_PI/5){
        printf(" %5.2lf   %5.2lf   %5.2lf   %5.2lf   %5.2lf   %5.2lf\n", i, sin(i), cos(i), tan(i), exp(i), log(i));
    }
    return 0;
}