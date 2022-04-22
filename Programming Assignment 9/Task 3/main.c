/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 9 Task 3
 * Date:            4/21/2022
 * Description:     Displays the reverse of the sentence
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 1024

char temp[MAX_LENGTH];

void printString(char *a, int start, int end);

int main() {
  //Initialize variables with all spaces
  char a[MAX_LENGTH];
  for (int i = 0; i < MAX_LENGTH; i++) {
    a[i] = ' ';
  }
  int n = 0;
  int m = 0;

  //Allows for user input from the user.
  fgets(a, MAX_LENGTH, stdin);

  for (int i = 0; i < MAX_LENGTH; i++) {
    if (a[i] == '.' || a[i] == '\0'){
      m=i;
      for (int j = i; j >= n; j--){
        if (a[j] == ' ' || j==0){
          if (j == 0 )
            strcat(temp, " ");
          printString(a, j, m);
          m=i-(i-j);
        }
      }
      strcat(temp, "\b.\n");
      n=i;
    }
  }
  puts(temp);

  return 0;
}

void printString(char *a, int start, int end){
  for (int i=start; i<=end; i++){
    if(a[i]!='.'&& a[i]!='\n')
      sprintf(temp, "%s%c", temp, a[i]);
  }
}
