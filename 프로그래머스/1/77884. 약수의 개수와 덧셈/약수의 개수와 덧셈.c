#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int factor_count(int num){
    int factor = 0;
    for(long i=1; i*i <= num; i++){
        if(num%i == 0){
            factor += (i*i == num) ? 1: 2;
        }
    }
    return factor;
}

int solution(int left, int right) {
    int answer = 0;
    int factor = 0;
    
    
    for(int i=left; i<=right; i++){
        factor = factor_count(i);
        if(factor % 2 == 0){
            answer += i;
        }else{
            answer -= i;
        }
    }
    return answer;
}

