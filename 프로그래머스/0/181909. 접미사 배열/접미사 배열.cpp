#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    size_t size = my_string.size();

    for(size_t i=0; i<size; i++){
        answer.push_back(my_string.substr(i));
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}