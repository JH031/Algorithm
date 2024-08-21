#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  long long n,m;
  scanf("%lld %lld",&n,&m);

  if(n<m) printf("%lld",m-n);
  else printf("%lld",n-m);
}