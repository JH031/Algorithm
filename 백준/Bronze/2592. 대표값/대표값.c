#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int arr[10];
  int sum=0;
  int most[1000]={0,};
  int m=0,anw=0;
  
  for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
    most[arr[i]]++;
  }
  for(int i=1;i*10<1000;i++){
    if (m<most[i*10]){
      anw=i*10;
      m=most[i*10];
    }
  }
  printf("%d\n%d",sum/10,anw);
  }