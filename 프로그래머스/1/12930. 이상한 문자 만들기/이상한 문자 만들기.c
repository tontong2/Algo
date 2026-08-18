#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>



// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    size_t len = strlen(s);
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    strcpy(answer, s);
    
    char* word = strtok(answer, " ");
  
    while(word != NULL){
          size_t wlen = strlen(word);
    
        for(size_t i=0; i<wlen; i++){
            if(i % 2 == 0){
               word[i] = toupper((unsigned char)word[i]);
            }else{
                word[i] = tolower((unsigned char)word[i]);
            }
        }
        
        if(word + wlen != answer + len) {
            word[wlen] = ' ';
        }
        
        word = strtok(NULL, " ");
        
    }
    
    return answer;
}