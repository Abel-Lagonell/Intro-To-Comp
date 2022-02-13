#include <stdio.h>

int main(void){

    int a,  //first integer
    b,      //second integer
    d=0;    //divisor

    //Ask user for the two integers
    puts("Please put integer A and B for which you want to find the least common multiple: (format A,B) ");
    scanf("%d%*c%d", &a, &b);

    //initialize the divisor by adding the second integer.
    d += b;

    //Finding the LCM
    while (d%a != 0) {
        d += b;
    }

    //Outputting the LCM
    printf("The least common multiple of %d and %d is %d", a, b, d);

    return 0;
}