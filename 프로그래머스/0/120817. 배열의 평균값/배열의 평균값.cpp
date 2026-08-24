#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int size = numbers.size();
    double total = 0;
    for(double e: numbers){
        total += e;
    }
    answer = total/size;
    return answer;
}