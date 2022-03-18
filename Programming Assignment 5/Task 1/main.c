/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 5 Task 1
 * Date:            2/23/2022
 * Description:     Tell wether the letter is a vowel or a consonant.
*/

#include <stdio.h>

int main(void){

    char letter;

<<<<<<< HEAD
    while (letter != EOF && letter != '\n'){
=======
    puts("To end program put EOF and press enter twice.");

    do{// Program Runs as long as there is no EOF
        //User input for the letter
        puts("Please enter a letter");
        letter = getchar();
        getchar();

        //Check to see if user wants to end Program
        if (letter == EOF)
            continue;
        //Check to see if letter is in the alphabet
>>>>>>> 4f6b269f86fa068a19110f38e870f5e8c38000b1
        if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')){
            switch (letter){
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    printf("%c is a vowel\n",letter);
                    break;
                default:
                    printf("%c is a consonant letter\n",letter);
                    break;
<<<<<<< HEAD
                }
        }else {
            puts("Not an English alphabet\n");
        }
        puts("Please enter a letter");
        letter = getchar();
    }
=======
            }
        }else{
            puts("Not an English alphabet");
        }  
    } while (letter != EOF);

>>>>>>> 4f6b269f86fa068a19110f38e870f5e8c38000b1
    return 0;
}