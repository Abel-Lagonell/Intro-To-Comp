#include <stdio.h>
#include <math.h>

int fun(int n);

int main(){
  int x;
  puts("put x:");
  scanf("%d", &x);
  printf("%d\n", fun(x));
  return 0;
}

int fun(int n){
  int sum = 1;
  for(int i=1; i<=n; i++){
    sum *= i;
  }
  return sum;
}
