/*******************************
 * Name:            Abel Lagonell
 * Programming Assignment 7 Task 4
 * Date:            3/17/2022
 * Description:     
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum value {Head, Tail};

static int tails, heads;

int tally (int selection, enum value v);
int toss();

int main(void){
    srand((unsigned) time(NULL)); 
    for(int i=0; i < 10000 ; i++) {
        tally(1, toss());
    }
    printf("Heads: %d, Tails: %d\n", tally(0,Head), tally(0,Tail));
}

int tally(int selection,enum value v){
    if(selection==0){
        switch(v){
            case Head:
                return heads;
                break;
            case Tail:
                return tails;
                break;
            default:
                return 1;
        }
    }
    if(selection!=0){
        switch(v){
            case Head:
                heads ++;
                return -1;
                break;
            case Tail:
                tails ++;
                return -1;
                break;
            default:
                return 1;
        }
    }
}

int toss(){
    return rand()%2;
}