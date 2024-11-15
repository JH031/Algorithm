#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    char* a=(char*)malloc(5);
    
    int idx=0;
    
    for(int i=0;i<strlen(my_string);i++){
        if(my_string[i]>='0'&&my_string[i]<='9'){
            a[idx++]=my_string[i];
        }
        else{
            a[idx]='\0';
            if(idx>0) answer+=atoi(a);
            idx=0;
        }
    }
    if(idx>0){
        a[idx]='\0';
        answer+=atoi(a);    
    }
    free(a);
    return answer;
}