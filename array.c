#include <stdio.h>
#include <stdlib.h>

//Any

void swap(int *a, int *b){
  double temp = *a;
  *a = *b;
  *b = temp;
}

//Double 2D array

void print2DDoubleArray(double *a, size_t row, size_t col){
  for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
        printf("%5.2lf ", a[i*col+j]);
    }
    puts("");
  }
}

void print2DDoubleArrayCol(double *a, size_t row, size_t col, int colIndex){
  for (int i = 0; i < row; i ++){
    printf("%5.2lf ", a[i*col + colIndex]);
    puts("");
  }
}

void print2DDoubleArrayRow(double *a, size_t row, size_t col, int rowIndex){
  for (int i = 0; i < col; i++){
    printf("%5.2lf ", a[rowIndex*col + i]);
  }
}

void swap2DDoubleCol(double *a, size_t row, size_t col, int colIndexOne, int colIndexTwo){
  for (int i = 0; i < row; i ++){
    double temp = a[i*col + colIndexOne];
    a[i*col + colIndexOne] = a[i*col + colIndexTwo];
    a[i*col + colIndexTwo] = temp;
  }
}

//Integer 2D array

void print2DIntArray(int *a, size_t row, size_t col){
  for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
        printf("%5d ", a[i*col+j]);
    }
    puts("");
  }
}

void print2DIntArrayCol(int *a, size_t row, size_t col, int colIndex){
  for (int i = 0; i < row; i ++){
    printf("%5d ", a[i*col + colIndex]);
    puts("");
  }
}

void print2DIntArrayRow(int *a, size_t row, size_t col, int rowIndex){
  for (int i = 0; i < col; i++){
    printf("%5d ", a[rowIndex*col + i]);
  }
}

void swap2DIntCol(int *a, size_t row, size_t col, int colIndexOne, int colIndexTwo){
  for (int i = 0; i < row; i ++){
    int temp = a[i*col + colIndexOne];
    a[i*col + colIndexOne] = a[i*col + colIndexTwo];
    a[i*col + colIndexTwo] = temp;
  }
}

//Interger 1D array

int bin1DIntSearch(int *a, size_t col, int key){
    int min = 0;
    int max = col-1;
    int mid;
    while (min <= max){
        if (a[mid] == key){ 
            int midHigh = mid;
            while (a[midHigh] == key){
                midHigh++;
            }
            while (a[midHigh] == key){
                mid--;
            }
            printf("The Key is located between index %d:%d\n", mid, midHigh-1);
            return 0;
        }
        mid= min + (max-min)/2;
        if (a[mid] < key){
            min = mid +1;
        } else if (a[mid] > key){
            max = mid -1;
        }
    }
    
    puts("There is not value for that key"); 
    return -1;
}

void print1DIntArray(int *a, size_t col){
    for (int j = 0; j < col; j++){
        printf("%d, ", a[j]);
    }
    puts("");
}

void bubbleSort1DInt(int *a, size_t col){
    for (int i = 0; i < col; i++){
        for (int j = 0; j < col - 1; j++){
            if (a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void make1DIntArrayRand(int *a, size_t col, int valueStart, int valueEnd){
    for (int i = 0; i < col ; i++){    
        a[i] = rand()%(valueEnd - valueStart +1)+valueStart;
    }
}

//Double 1D array

void print1DDoubleArray(double *a, size_t col){
    for (int j = 0; j < col; j++){
        printf("%lf, ", a[j]);
    }
    puts("");
}


int bin1DDoubleSearch(double *a, size_t col, double key){
    int min = 0;
    int max = col-1;
    int mid;
    while (min <= max){
        if (a[mid] == key){ 
            int midHigh = mid;
            while (a[midHigh] == key){
                midHigh++;
            }
            printf("The Key is located between index %d:%d\n", mid, midHigh-1);
            return 0;
        }
        mid= min + (max-min)/2;
        if (a[mid] < key){
            min = mid +1;
        } else if (a[mid] > key){
            max = mid -1;
        }
    }
    
    puts("There is not value for that key"); 
    return -1;
}

void bubbleSort1DDouble(double *a, size_t col){
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