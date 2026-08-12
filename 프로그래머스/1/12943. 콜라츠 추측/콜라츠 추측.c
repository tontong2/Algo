#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    long x = num;
    int check = 0;
    
    
    while(x != 1 ){
        if(check == 499){
            answer = -1;
            break;
        }
        if(x % 2 == 0){
            x = x/2;
        }else{
            x = (x*3) + 1;
           
        }
        check++;
        answer = check;
    }
   

    return answer;
}

