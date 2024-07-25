#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*100);
    int idx=0;
    for(int i=0;i<strlen(my_string);i++){
        if(my_string[i]>='0' && my_string[i]<='9'){
            answer[idx]=my_string[i]-'0';
            idx++;
        }
    }
    realloc(answer,sizeof(int)*idx);
    
    for(int i=0;i<idx-1;i++){
        for(int j=0;j<idx-1-i;j++){
            if(answer[j]>answer[j+1]){
                int temp=answer[j];
                answer[j]=answer[j+1];
                answer[j+1]=temp;
            }
        }
        
    }
    return answer;
}