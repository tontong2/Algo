#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    for(int i=num1; i<=num2; i++){
        int num = numbers.at(i);
        answer.push_back(num);
    }
    return answer;
}