#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int a=0;
    
    for(int i=1000000;i>=1;i=i/10){
        if(num/i>0) a++;
    }

    int m = pow(10,a-1);
    int answer=1;
    int p=0;
    
    for(int i=0;i<a;i++){
        if(i==0){
            p=num/m;
            if(p==k) return answer;
        }
        else{
            answer++;
            p=num%m;
            m/=10;
            if(p/m==k) return answer;
        }
    }
    return -1;
}