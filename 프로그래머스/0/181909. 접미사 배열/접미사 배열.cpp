#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    size_t size = my_string.size();

    for(size_t i=0; i<size; i++){
        string temp;
        for(size_t idx = i; idx<size; idx++){
            temp += my_string[idx];
        }
        answer.push_back(temp);
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}