#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char word[101];
  scanf("%s",word);
  int cnt=0;
  
  for(int i=0;i<strlen(word);i++){
    if(word[i]=='a' ||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u' ) cnt++;
  }
  printf("%d",cnt);
}