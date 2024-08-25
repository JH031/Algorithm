#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int n1,n2;
  int a,b;
  scanf("%d %d",&n1,&n2);
  
  if(n1>n2){
    a=n1;b=n2;
  }
  else{
    a=n2;b=n1;
  }

  for(;b>0;){
    int r=0;
    if(a%b!=0){
      r=a%b;
      a=b;
      b=r;
    }
    else{
      break;
    }
  }
  
  printf("%d\n%d",b,n1*n2/b);
}