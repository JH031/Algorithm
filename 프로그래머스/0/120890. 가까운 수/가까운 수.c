#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    int dif=100;
    for(int i=0;i<array_len;i++){
        if(abs(n-array[i])<dif){
            dif = abs(n-array[i]);
            answer=array[i];
        }
        if(abs(n-array[i])==dif){
            answer= array[i]<answer? array[i]:answer;
        }
    }
    return answer;
}