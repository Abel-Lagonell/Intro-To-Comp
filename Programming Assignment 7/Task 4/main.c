/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 7 Task 4
 * Date:            3/17/2022
 * Description:     
*/

#include <stdio.h>
#include <stdlib.h>

enum value{Head, Tail};
static int tails, heads;

int tally (int selection, value v);
void toss();

int main(void){
    for(int i=0; i < 10000 ; i++) toss();
    printf("Heads: %d, Tails: %d\n", tally(1,'Head'), tally(1,'Tail'));
}

int tally(int selection,value v){
    if(selection==0){
        switch(v){
            case 0:
                return heads;
                break;
            case 1:
                return tails;
                break;
            default:
                return 1;
        }
    }
    if(selection!=0){
        switch(v){
            case 0:
                head ++;
                return -1;
                break;
            case 1:
                tails ++;
                return -1;
                break;
            default:
                return 1;
        }
    }
}

void toss(){
    tally(1, rand()%2);
}