#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"

int main(){
  int a[100];
  
  srand(time(NULL));

  make1DIntArrayRand(a, 100, 1999, 2022);
  bubbleSort1DInt(a, 100);
  print2DIntArray(a,5,20);

  int key;
  scanf("%d", &key);
  bin1DIntSearch(a, 100, key);
}


