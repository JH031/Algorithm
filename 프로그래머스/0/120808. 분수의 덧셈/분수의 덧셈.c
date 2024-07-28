#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*2);
    int min=0;
    int div=0;
    
    int denom=denom1*denom2;
    int numer=numer1*denom2+numer2*denom1;
    
    min = denom<numer? denom : numer; 
    for(int i=1;i<=min;i++){
        if(denom%i==0 && numer%i==0) div=i;
    }
    answer[0]= numer/div;
    answer[1]= denom/div;
    
    return answer;
}