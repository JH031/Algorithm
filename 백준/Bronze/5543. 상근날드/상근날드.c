#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int arr[5];
  int low=5000;
  for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<3;i++){
    int price = arr[i]+arr[3]-50 > arr[i]+arr[4]-50 ? arr[i]+arr[4]-50 : arr[i]+arr[3]-50;
    if(price<low) low=price;
  }
  printf("%d",low);
}