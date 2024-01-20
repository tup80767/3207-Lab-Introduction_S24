#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h" 

char randchar(){
    srand((unsigned)time(NULL));

    int randNum =  97 + (rand() % 25);
    return (char) randNum;
}
