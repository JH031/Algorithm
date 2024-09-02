#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int n,fn1=0,fn2=1,fn;
  scanf("%d",&n);

  if(n == 0 || n == 1){
    printf("%d",n == 0 ? fn1 : fn2);
    return 0;
  }
  
  for(int i=2;i<=n;i++){
    fn=fn1+fn2;
    fn1=fn2;
    fn2=fn;
    if(n == i) printf("%d",fn); 
  }
}