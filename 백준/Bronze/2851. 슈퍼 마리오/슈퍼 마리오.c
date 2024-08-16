#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int arr[10];

  for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
  }
  
  int sum = 0;
  for(int i=0;i<10;i++){
    if(sum<100) sum+=arr[i];
    if(sum>100){
      if(abs(sum-arr[i] - 100) == sum-100) sum = sum;
      else if(abs(sum-arr[i]-100)<sum-100) sum = sum-arr[i];
      break;
    }
    if(sum==100) break;
  }
  printf("%d",sum);
}