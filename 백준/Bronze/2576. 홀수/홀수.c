#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int odd[7];
  int a,min=100,sum=0,idx=0;
  
  for(int i=0;i<7;i++){
    scanf("%d",&a);
    if(a%2==1){
      odd[idx++]=a;
      if(odd[idx-1]<min) min=odd[idx-1];
    }
  }
  for(int i=0;i<idx;i++) sum+=odd[i];
  
  if(idx==0) printf("-1");
  else printf("%d\n%d",sum,min);
}