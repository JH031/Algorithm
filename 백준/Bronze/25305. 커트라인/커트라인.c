#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n,k;
  scanf("%d %d",&n,&k);

  int* arr = (int*)malloc(sizeof(int)*n);

  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<n-1;i++){
    for(int j=n-1;j>=i;j--){
      if(arr[j+1]>arr[j]){
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("%d",arr[k-1]);
}