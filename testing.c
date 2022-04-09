#include <stdio.h>
#include <math.h>

void printArray(double *a, size_t row, size_t col){
  for (int i = 0; i < row; i ++){
    for (int j = 0; j < col; j++){
        printf("%5.2lf ", a[i*col+j]);
    }
    puts("");
  }
}

void swap(double *a, double *b){
  double temp = *a;
  *a = *b;
  *b = temp;
}

void printArrayCol(double *a, size_t row, size_t col, int colIndex){
  for (int i = 0; i < row; i ++){
    printf("%5.2lf ", a[i*col + colIndex]);
    puts("");
  }
}

void printArrayRow(double *a, size_t row, size_t col, int rowIndex){
  for (int i = 0; i < col; i++){
    printf("%5.2lf ", a[rowIndex*col + i]);
  }
}

void swapCol(double *a, size_t row, size_t col, int colIndexOne, int colIndexTwo){
  for (int i = 0; i < row; i ++){
    double temp = a[i*col + colIndexOne];
    a[i*col + colIndexOne] = a[i*col + colIndexTwo];
    a[i*col + colIndexTwo] = temp;
  }
}

int main(){
  double x[5][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {10,11,12},
                    {13,14,15}};
  swapCol(*x, 5, 3, 0, 2);
  printArray(*x, 5, 3);

}


