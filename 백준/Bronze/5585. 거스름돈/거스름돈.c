#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int cnt=0,price;
  scanf("%d",&price);
  
  int left = 1000-price;
  
  for(;left>0;){
    if(left/500>=1){
      cnt++;
      left-=500;
    }
    else if(left/100>=1){
      cnt++;
      left-=100;
    }
    else if(left/50>=1){
      cnt++;
      left-=50;
    }
    else if(left/10>=1){
      cnt++;
      left-=10;
    }
    else if(left/5>=1){
        cnt++;
        left-=5;
    }
    else{
      cnt= cnt+left;
      left=0;
    }
  }
  printf("%d",cnt);
}