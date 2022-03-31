/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 7 Task 3
 * Date:            3/17/2022
 * Description:     Calculate the value of the sum of an exponent diveded by the factorial
*/

#include <stdio.h>
#include <math.h>

//Initialize the function pointers
int fact(int n);
double eval(int n, double x);

int main(void) {
    int n;
    double x;
    puts("Put in how many iterations followed by the x value");
    scanf("%d, %lf", &n, &x);
    printf("The answer is %.2lf", eval(n, x));
}

//Factorial
int fact(int n) {
    if (n<1) return -1;
    if (n == 1) return 1;
    return fact(n -1) * n;
}

//Summation function
double eval(int N, double x) {
    if (N == 1) return 1;
    return pow(x,N-1)/fact(N) + eval(N-1,x);
}