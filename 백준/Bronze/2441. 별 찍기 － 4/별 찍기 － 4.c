#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n;
  scanf("%d",&n);
  int k=0;
  
  for(int i=1;i<=n;i++){
    if(k!=0){
      for(int p=0;p<k;p++) printf(" ");
    }
    for(int j=i-1;j<n;j++){
      printf("*");
    }
    printf("\n");
    k++;
  }
}