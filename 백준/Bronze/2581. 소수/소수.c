#include <stdio.h>

int main(void) {
  int m,n;
  int sum=0;
  int min=10000;
  
  scanf("%d",&m);
  scanf("%d",&n);

  for(int i=m;i<=n;i++){
    int x=0;
    if(i==1) x=1;
    for(int j=2;j<=i-1;j++){
      if(i%j==0){
        x=1;
        break;
      }
    }
    
    if(x!=1){
      sum+=i;
      if(min>i) min=i;
    }
  }
  if(sum==0) printf("%d",-1);
  else printf("%d\n%d",sum,min);
}