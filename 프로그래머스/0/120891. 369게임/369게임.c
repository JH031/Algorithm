#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int order) {
    int cnt=0;
    int a=0;
    
    for(int i=1;i<=1000000;i*=10){
        if(order/i>0) a++;
    }
    
    int j= pow(10,a-1);
    int p=0;
    for(int i=0;i<a;i++){
        if(i==0) p=order/j;
        else{
            p=(order%j)/(j/10);
            j=j/10;
        }
            
        if((p==3) ||(p==6) ||(p==9)) cnt++;
    }
    return cnt;
}