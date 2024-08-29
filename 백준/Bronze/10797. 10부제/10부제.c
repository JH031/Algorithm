#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int num,cnt=0;
  int car[5];
  
  scanf("%d",&num);
  
  for(int i=0;i<5;i++){
    scanf("%d",&car[i]);
    if(num==car[i]) cnt++;
  }

  printf("%d",cnt);
}