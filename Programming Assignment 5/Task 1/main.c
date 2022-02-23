/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 5 Task 2
 * Date:            2/23/2022
 * Description:     Tell wether the letter is a vowel or a consonant.
 */

#include <stdio.h>

int main(void){

    char letter;

    do{
        puts("Please enter a letter");
        letter = getchar();
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
                case EOF:
                    break;
                default:
                    printf("%c is a consonant letter\n",letter);
                    break;
            }
        }else if (letter == EOF){
            continue;
        }else {
            puts("Not an English alphabet\n");
        }
    } while (letter != EOF);

    return 0;
}