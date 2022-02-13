#include <stdio.h>

int main(void){

    double i,   //Height
    w,          //Weight
    bmi;

    //Ask user for height input
    puts("Please input your height in inches: ");
    scanf("%lf", &i);

    //Ask user for weight input
    puts("Please input your weight in pounds: ");
    scanf("%lf", &w);

    //BMI calculation
    bmi = ( w * 703.0 )/( i * i );

    //Categorize the BMI into the different sections
    if(bmi<18.5){
        printf("Your BMI is %.2lf (Underweight)" , bmi);
    } else if (bmi < 24.9){
        printf("Your BMI is %.2lf (Normal)" , bmi);
    } else if (bmi < 29.9){
        printf("Your BMI is %.2lf (Overweight)" , bmi);
    } else {
        printf("Your BMI is %.2lf (Obese)" , bmi);
    }

    return 0;
}