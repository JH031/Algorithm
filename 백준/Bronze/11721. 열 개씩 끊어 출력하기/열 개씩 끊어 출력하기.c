#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str[100];
  int k=0;
  scanf("%s",str);
  
  for(int i=0;i<strlen(str);i++){
    printf("%c",str[i]);
    k++;
    if(k%10==0) printf("\n");
  }
}