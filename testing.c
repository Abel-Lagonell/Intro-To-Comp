#include <stdio.h>

int main(){
  int count =0;
  int sum = 0;
  do{
    sum += count++;
    printf("%d %d\n",count,count-1);
  } while (++count <5);
  printf("%d %d\n",count,sum);
  return 0;
}