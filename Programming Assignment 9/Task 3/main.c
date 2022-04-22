/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 9 Task 3
 * Date:            4/21/2022
 * Description:     Displays the reverse of the sentence
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Define MAX_LENGTH for better debugging
#define MAX_LENGTH 1024

//set up global array that will be used for output
char temp[MAX_LENGTH];

//Prototype the print string function
void printString(char *a, int start, int end);

int main() {
  //Initialize variables with all spaces
  char a[MAX_LENGTH];
  for (int i = 0; i < MAX_LENGTH; i++) {
    a[i] = ' ';
  }

  //Initialize variables with 0
  int n = 0;
  int m = 0;

  //Allows for user input from the user.
  fgets(a, MAX_LENGTH, stdin);

  //Function that changes the position of the words relative to the sentence.
  for (int i = 0; i < MAX_LENGTH; i++) {
    //Checks when the period or the null is found
    if (a[i] == '.' || a[i] == '\0'){
      //counter for printing strings
      m=i;
      //Prints the words into the array temp
      for (int j = i; j >= n; j--){
        //Prints the individual words
        if (a[j] == ' ' || j==0){
          printString(a, j, m);
          strcat(temp, " ");
          m=i-(i-j);
        }
      }
      //Concatenates a period at the end of the line
      strcat(temp, "\b.\n");
      n=i;
    }
  }

  //Prints out the string.
  puts(temp);

  return 0;
}

//Prints the string into the temp with no periods and no enter sign.
void printString(char *a, int start, int end){
  for (int i=start; i<=end; i++){
    if(a[i]!='.'&& a[i]!='\n' && a[i]!=' ')
      sprintf(temp, "%s%c", temp, a[i]);
  }
}
