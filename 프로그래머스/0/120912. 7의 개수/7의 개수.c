#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int cnt = 0;

    for(int i=0;i<array_len;i++){
        int a=array[i];
        for(int j=10000;j>=1;j/=10){
            if(a==7){
                cnt++;
                break;
            }
            else{
                if(a/j==7) cnt++;
                a = array[i]%j;
                
            }
        }
        
    }
    return cnt;
}