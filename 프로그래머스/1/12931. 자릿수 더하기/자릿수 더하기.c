#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
   int loop = n;
   while(loop != 0){
    answer += loop % 10; 
    loop = loop / 10;
   }
    return answer;
}