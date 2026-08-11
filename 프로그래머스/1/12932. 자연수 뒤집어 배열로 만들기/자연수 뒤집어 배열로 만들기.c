#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int* solution(long long n) {
    long long loop = n; 
    int size = 0;
    while(loop != 0){
        loop = loop/10;
        size++; 
    }
    int *answer = (int*)malloc(size * sizeof(int));
        for(int i=0; i<size; i++){
        answer[i] = n % 10;
        n = n/10;
    }

    return answer;
}

