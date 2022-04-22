#include <stdio.h>

<<<<<<< HEAD
void alphabet(char a[], size_t size){
  int alpha[26];
  for (int i = 0; i < 26; i++) alpha[i] =0;
  for (int i = 0; i < size; i ++){
    for(int j = 0; j < 26; j++){
      if(a[i] == 'a'+j || a[i] == 'A'+j){
        alpha[j] = alpha[j]+1;
      }
    }
  }
  for (int i=0; i<26; i++){
    printf("The count of %c is %d\n", 'a'+i, alpha[i]);
  }
}


int main(){
  char s[]="HenrySaysHelloWorld";
  alphabet(s,19);

}
=======

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

>>>>>>> 5421710693420848429f0269985f09413d0a4a52
