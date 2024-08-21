#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);

  int max=0;
  int min=0;
  int mid=0;
  
  max = a>b? (a>c?a:c) : (b>c? b:c);
  if(max==a){
    mid = b>c? b:c;
    min = b<c?b:c;
  } 
  else if(max==b){
    mid = a>c?a:c;
    min = a<c?a:c;
  }
  else{
    mid = a>b?a:b;
    min = a<b?a:b;
  }
  printf("%d %d %d",min,mid,max);
}