#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d",&n);
  int k=1;
  int m=n-1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      printf(" ");
    }
    for(int l=1;l<=k;l++){
      printf("*");
    }
    k+=2;
    m-=1;
    printf("\n");
  }
}