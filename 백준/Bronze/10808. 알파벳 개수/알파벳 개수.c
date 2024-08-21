#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int arr[26]={0,};
  char word[101];
  scanf("%s",word);

  for(int i=0;i<strlen(word);i++){
    arr[word[i]-'a']++;
  }
  for(int i=0;i<26;i++){
    printf("%d ",arr[i]);
  }
}