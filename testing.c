#include <stdio.h>


int main(){
  char c1, c2, temp;
  puts("enter two characters seperated with a comma");
  scanf("%c,%c", %c1, %c2);
  if (c1>c2){
    temp = c1;
    c1 = c2;
    c2 = temp;
  }
  while (c1<=c2){
    putchar(c1);
    c1++;
  }
  return 0;
  
}

