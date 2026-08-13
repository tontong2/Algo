#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long cal(int price, int count){
    long long result = 0;
    for(int i=1; i<=count; i++){
        result += price*i; 
    }
    return result; 
}

long long solution(int price, int money, int count) {
    long long answer = -1;
    answer = cal(price, count) - money;
    if(answer < 0){
        return 0; 
    }
    return answer;
}