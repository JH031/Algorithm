#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {   
    return (hp/5)+(hp%5)/3+((hp%5)%3)/1;
    
}