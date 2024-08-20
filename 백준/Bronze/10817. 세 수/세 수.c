#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int max=0;
  int answer=0;
  max = a>c ? a>b ? a : b : c>b ? c : b;
  
  if(max == a) answer = b>c ? b:c;
  else if(max==b) answer= a>c?a:c;
  else answer = a>b?a:b;
  printf("%d",answer);
}