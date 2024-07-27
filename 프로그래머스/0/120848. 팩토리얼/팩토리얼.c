#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int fact=1;
    int i=1;
    while(true){
        if(fact*i <= n) {
            fact*=i;
            i++;
        }
        else return --i;
    }
}