#pragma once
#include "array.c"

//Any

void swap(int *a, int *b);


//Double 2D array

void print2DDoubleArray(double *a, size_t row, size_t col);
void print2DDoubleArrayCol(double *a, size_t row, size_t col, int colIndex);
void print2DDoubleArrayRow(double *a, size_t row, size_t col, int rowIndex);
void swap2DDoubleCol(double *a, size_t row, size_t col, int colIndexOne, int colIndexTwo);

//Integer 2D array

void print2DIntArray(int *a, size_t row, size_t col);
void print2DIntArrayCol(int *a, size_t row, size_t col, int colIndex);
void print2DIntArrayRow(int *a, size_t row, size_t col, int rowIndex);
void swap2DIntCol(int *a, size_t row, size_t col, int colIndexOne, int colIndexTwo);


//Integer 1D array

int bin1DIntSearch(int *a, size_t col, int key);

void print1DIntArray(int *a, size_t col);
void bubbleSort1DInt(int *a, size_t col);
void make1DIntArrayRand(int *a, size_t col, int valueStart, int valueEnd);

//Double 1D array

void print1DDoubleArray(double *a, size_t col);
int binSearch1DDouble(double *a, size_t col, double key);
void bubbleSort1DDouble(double *a, size_t col);
