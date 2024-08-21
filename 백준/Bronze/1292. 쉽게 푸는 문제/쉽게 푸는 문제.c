#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int a,b;
  scanf("%d %d",&a,&b);
  
  int arr[1001]={0,};
  int idx=1;
  int sum=0;
  
  for(int i=1;idx<=1000;i++){
    for(int j=1;j<=i && idx<=1000;j++){
      arr[idx]=i;
      idx++;
    }
  }
  for(int i=a;i<=b;i++){
    sum+=arr[i];
  }
  printf("%d",sum);
}