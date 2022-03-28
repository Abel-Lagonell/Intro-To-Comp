#include <stdio.h>
#include <math.h>

int gcd(int A, int B);

int main(){
  int x,y;

  puts("Put in A:");
  scanf("%d",&x);
  puts("Put in B:");
  scanf("%d",&x);
}

int gcd(int A, int B){
  if(A<B){
    int C = A;
    A = B;
    B = C;
  }
  if(A%B) return B; //GCD is B
  else gcd(B, A/B);
}
