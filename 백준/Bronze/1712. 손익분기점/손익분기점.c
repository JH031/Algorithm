#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int a,b,c,n=1;
  scanf("%d %d %d",&a,&b,&c);

  if(b>=c) printf("-1");
  else printf("%d",a/(c-b)+1);
}