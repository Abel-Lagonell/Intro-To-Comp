/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 8 Task 2
 * Date:            4/9/2022
 * Description:     Calculating various values of an array.
*/

#include <stdio.h>
#include <math.h>

double arraySum(double *a, size_t col);
double arrayMean(double *a, size_t col);
double arrayMin(double *a, size_t col);
double arrayMax(double *a, size_t col);
int arrayZero(double *a, size_t col);
double arrayMedian(double *a, size_t col);
double arrayMode(double *a, size_t col);

int main(){

    //Making of the array
    double array[10];
    for (int i = 0; i < 10; i++) {
        printf("Please put index %d: ", i+1);
        scanf("%lf", &array[i]);
    }
    
    //Printing the array details
    printf("The sum of the array is:\t\t%5.2lf\n", arraySum(array, 10));
    printf("The mean of the array is:\t\t%5.2lf\n", arrayMean(array, 10));
    printf("The Minimun value of the array is:\t%5.2lf\n", arrayMin(array, 10));
    printf("The Maximum value of the array is:\t%5.2lf\n", arrayMax(array, 10));
    printf("The number of zeros in the array is:\t%3d\n", arrayZero(array, 10));
    printf("The Median of the array is:\t\t%5.2lf\n", arrayMedian(array, 10));
    printf("The Mode of the array is:\t\t%5.2lf\n", arrayMode(array, 10));

    return 0;
}

//Summation
double arraySum(double *a, size_t col){
    double sum =0;
    for (int j = 0; j < col; j++){
        sum += a[j];
    }
    return sum;
}

//Mean of the array
double arrayMean(double *a, size_t col){
    //Calls the sum and divides it by given col value
    return arraySum(a, col)/col;
}

//Array Min
double arrayMin(double *a, size_t col){
    double min = a[0];
    for (int j = 0; j < col; j++){
        if (min > a[j]){
            min = a[j];
        }
    }
    return min;
}

//Array Max
double arrayMax(double *a, size_t col){
    double max = a[0];
    for (int j = 0; j < col; j++){
        if (max < a[j]){
            max = a[j];
        }
    }
    return max;
}

//Sequential Search
int arrayZero(double *a, size_t col){
    int zero = 0;
    for (int j = 0; j < col; j++){
        if (a[j] == 0){
            zero++;
        }
    }
    return zero;
}

//Array Median
double arrayMedian(double *a, size_t col){
    //Sorts the function
    for (int i = 0; i < col; i++){
        for (int j = 0; j < col - 1; j++){
            if (a[j] > a[j + 1]){
                double temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //gets the middle 2 values (if even) or middle value (if odd)
    int cl = ceil((col-1)/2.);
    int fl = floor((col-1)/2.);
    return (a[cl]+a[fl])/2;
}

double arrayMode(double *a, size_t col){
    //Sorting the array
    for (int i = 0; i < col; i++){
        for (int j = 0; j < col - 1; j++){
            if (a[j] > a[j + 1]){
                double temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //Initialization of second array to store values of how many times the number repeats with the first time the number appears
    double b[col];
    //Setting of all values to 1 because worst case everything only appears once
    for (int j = 0; j < col; j++){
        b[j] = 1;
    }

    //Starts counting how many times a number appears within the array
    int count = 0;
    int counter = 2;
    for (int i = 0; i < col; i++){
        if (a[i] == a[i+1]){
            b[count] = counter;
            counter++;
        } else{
            count++;
            counter = 2;
        }
    }
    //Calls the max function to get the max value of the second array favoing the biggest value
    int maxCount = arrayMax(b, col);
    //Check for worst case
    if (maxCount == 1) {
        printf("There is no mode\n");
        return -1;
    }
    //Gets the max value favoring the first max value, and gets the index
    for (int j = 0; j < col; j++){
        if (b[j] == maxCount){
            return a[j];
        }
    }
}
