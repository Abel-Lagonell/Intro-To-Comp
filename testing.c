#include <stdio.h>

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
