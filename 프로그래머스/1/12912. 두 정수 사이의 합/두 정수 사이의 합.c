#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a + (a+1) + (a+2) + ... + b
// 등차수열의 합 = (첫항+끝항) * 항의 갯수 * 0.5

long long solution(int a, int b) {
    long long answer = 0;
    long num = abs(b-a);
    
    if(a==b) answer = a;
    answer = (a+b) * (num+1) * 0.5;
    
    return answer;
}