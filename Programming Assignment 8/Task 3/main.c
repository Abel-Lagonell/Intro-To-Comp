/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 8 Task 2
 * Date:            4/9/2022
 * Description:     Searching for a key
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void makeArrayRand(int *a, size_t col);
void sort(int *a, size_t col);
void search(int *a, size_t col, int key);
void printArray(int *a, size_t col);

int main(){
    srand(time(NULL));
    int a[100];
    int key;
    makeArrayRand(a, 100);
    sort(a, 100);
    printArray(a, 100);
    printf("What is the number you are looking for? ");
    scanf("%d", &key);
    search(a, 100, key);
}

//Making the random array
void makeArrayRand(int *a, size_t col){
    for (int i = 0; i < col ; i++){    
        a[i] = rand()%(21);
    }
}

//Printing of the array
void printArray(int *a, size_t col){
    for (int j = 0; j < col; j++){
        printf("%2d, ", a[j]);
    }
    puts("");
}

//Sorting the array
void sort(int *a, size_t col){
    for (int i = 0; i < col; i++){
        for (int j = 0; j < col - 1; j++){
            if (a[j] > a[j + 1]){
                double temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

//Binary Search with range
void search(int *a, size_t col, int key){
    int min = 0;
    int max = col-1;
    int mid=floor((max)/2);
    while (a[mid] != key){
        if (a[mid] > key){
            max = mid;
        }
        if (a[mid] < key){
            min = mid;
        }
        mid=floor((max+min)/2);
    }
    
    int midLow = mid; 
    int midHigh = mid;
    while (a[midLow] == key){
        midLow--;
    }
    while (a[midHigh] == key){
        midHigh++;
    }
    midLow++;
    midHigh--;
    printf("The Key is located between index %d:%d", midLow, midHigh);
}