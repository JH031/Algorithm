#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    
    if(n%slice==0) return n/slice;
    else return n/slice+1;
}
