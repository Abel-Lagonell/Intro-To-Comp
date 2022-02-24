/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 5 Task 2
 * Date:            2/23/2022
 * Description:     Tell the GCD of two given inputs
*/

#include <stdio.h>

int main(void){

    int n1,     //Positive integer #1
    n2,         //Positive integer #2
    d;          //The GCD integer

    puts("Please enter two numbers seperated by commas. (n1,n2)");
    scanf("%d,%d",&n1,&n2);

    printf("The two input numbers are: %d, %d\n", n1, n2);

    if ((n1<0)||(n2<0)){
        puts("Please enter Positive numbers next time.");
    }else if (n1<n2){
        for (d = 2; d < n1; d++){
            if( (n1%d==0) && (n2%d==0) ){
                printf("The Greatest Common Divisor is %d", d);
                continue;
            }
        }
        if (n1%d != 0){
            puts("There is no Greatest Common Divisor");
        }
    }else{
        for (d = 2; d < n2; d++){
            if( (n1%d==0) && (n2%d==0) ){
                printf("The Greatest Common Divisor is %d", d);
                continue;
            }
        }
        if (n2%d != 0){
        puts("There is no Greatest Common Divisor");
        }
    }

    return 0; //Inform the operating system that the exit is successful.
}