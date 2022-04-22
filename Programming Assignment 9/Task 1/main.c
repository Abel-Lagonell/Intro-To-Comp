/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 9 Task 1
 * Date:            4/21/2022
 * Description:     Give the user text statistics given a particular string
*/

#include <stdio.h>
#include <ctype.h>

//Prototype the function
void text_statistics(char a[1024], size_t size);

int main() {
  //Initialize the string variable with all spaces
  char s[1024];
  for (int i = 0; i < 1024; i++) s[i] = ' ';
  //allow for user input
  fgets(s, 1024, stdin);
  text_statistics(s, 1024);
  return 0;
}

void text_statistics(char a[1024], size_t size) {
  //An easier way to store data instead of making 4 variables
  int c[4] = {0,0,0,0};

  for(int i=0; i<size; i++){
    //Checks if the character is a alphanumeric
    if (isalnum(a[i])){
      //Checks if the character is a digit and if so increments the correct index
      if(isdigit(a[i]))
        c[0] ++;
      //Checks if the character is upper or lowercase and increments the respective index
      else if(isalpha(a[i])){
        if(!(isalpha(a[i-1]))) {
          c[1] ++;
          if (islower(a[i]))
            c[2] ++;
          if (isupper(a[i]))
            c[3] ++;
        }
      }
    }
  }

  //Prints out the stats
  printf("The number of digits is %d\n", c[0]);
  printf("The number of Words is %d\n", c[1]);
  printf("The number of uppercase words is %d\n", c[3]);
  printf("The number of lowercase words is %d\n", c[2]);
}
