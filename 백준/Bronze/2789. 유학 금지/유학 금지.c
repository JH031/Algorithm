#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char word[101];
  char answer[101];
  scanf("%s",word);
  
  int len= strlen(word);
  int idx=0;
  
  for(int i=0;i<len;i++){
    switch(word[i]){
      case 'C':
      case 'A':
      case 'M':
      case 'B':
      case 'R':
      case 'I':
      case 'D':
      case 'G':
      case 'E':
          break;
      default:
        answer[idx++] = word[i];
    }
  }
  printf("%s",answer);
}