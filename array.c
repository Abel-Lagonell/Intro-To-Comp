//Any

void swap(int *a, int *b){
  double temp = *a;
  *a = *b;
  *b = temp;
}

//double

void printArray(double *a, size_t row, size_t col){
  for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
        printf("%5.2lf ", a[i*col+j]);
    }
    puts("");
  }
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

//integers

void printArray(int *a, size_t row, size_t col){
  for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
        printf("%5d ", a[i*col+j]);
    }
    puts("");
  }
}

void printArrayCol(int *a, size_t row, size_t col, int colIndex){
  for (int i = 0; i < row; i ++){
    printf("%5d ", a[i*col + colIndex]);
    puts("");
  }
}

void printArrayRow(int *a, size_t row, size_t col, int rowIndex){
  for (int i = 0; i < col; i++){
    printf("%5d ", a[rowIndex*col + i]);
  }
}

void swapCol(int *a, size_t row, size_t col, int colIndexOne, int colIndexTwo){
  for (int i = 0; i < row; i ++){
    int temp = a[i*col + colIndexOne];
    a[i*col + colIndexOne] = a[i*col + colIndexTwo];
    a[i*col + colIndexTwo] = temp;
  }
}