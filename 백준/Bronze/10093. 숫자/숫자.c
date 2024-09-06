#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  long long a,b,i;
  scanf("%lld %lld",&a,&b);
  
  if(a<b){
    printf("%lld\n",b-a-1);

    for(i=a+1;i<b;i++){
      printf("%lld ",i);
    }
  }
    
  else if(a>b){
    printf("%lld\n",a-b-1);

    for(i=b+1;i<a;i++){
      printf("%lld ",i);
    }
  }
  else printf("0");
  return 0;
  }