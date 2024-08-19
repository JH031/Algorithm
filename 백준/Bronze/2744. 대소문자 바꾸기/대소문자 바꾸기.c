#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str[100];
  scanf("%s",str);

  for(int i=0;i<strlen(str);i++){
    if(str[i]>='a' && str[i]<='z') printf("%c",str[i]-32);
    else printf("%c",str[i]+32);
  }

}