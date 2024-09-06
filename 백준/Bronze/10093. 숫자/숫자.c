#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  long long a,b;
  scanf("%lld %lld",&a,&b);
  
  if(a==b){
    printf("%d",0);
    return 0;
  }
  else if(a>b){
    int temp=a;
    a=b;
    b=temp;
  }

  printf("%lld\n",b-a-1);

  for(int i=a+1;i<b;i++){
    printf("%d ",i);
  }

  
}