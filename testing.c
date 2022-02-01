#include <stdio.h>

int main(int argc, char **argv){
  char a;
  int b;
  float c;
  double d;

  printf("please type a character, an integer, a float, and a double seperated by a space: ");
  scanf("%c%d%f%lf", &a, &b, &c, &d); 
  printf("%c, %d, %f, %lf\n", a, b, c, d); 
} 