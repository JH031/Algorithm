#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d", &n);
  char str[12];  // 여유 공간을 더 줌
  sprintf(str, "%d", n);
  
  for(int i = 0; str[i] != '\0'; i++) {
    char max = str[i];
    int idx = i;
    
    for(int j = i + 1; str[j] != '\0'; j++) {
      if(str[j] > max) {
        max = str[j];
        idx = j;
      }
    }
    if (idx != i) {
      char temp = str[i];
      str[i] = str[idx];
      str[idx] = temp;
    }
  }
  
  printf("%d\n", atoi(str));
  return 0;
}
