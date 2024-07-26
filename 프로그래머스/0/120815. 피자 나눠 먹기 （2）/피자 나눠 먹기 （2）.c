#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i=1;
    while(true){
        if((i*6)%n != 0){
            i++;
        }
        else return i;

    }
    
}