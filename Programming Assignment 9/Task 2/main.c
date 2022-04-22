/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 9 Task 2
 * Date:            4/21/2022
 * Description:     switches lowercase to upper case
*/

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  //Initialize variables with all spaces
  char a[1024];
  for (int i = 0; i < 1024; i++) a[i] = ' ';
  //Allows for user input from the user.
  fgets(a, 1024, stdin);
  //Changes all lower to upper case characters
  for(int i = 0; i < 1024; i++){
    if(islower(a[i])) a[i] = toupper(a[i]);
  }
  //Prints the string
  printf("%s", a);
  return 0;
}
