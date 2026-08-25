#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i=0; i<strArr.size(); i++){
        string s = strArr.at(i);
        if(i%2 == 0){
            transform(s.begin(), s.end(), s.begin(), ::tolower);
        }else{
            transform(s.begin(), s.end(), s.begin(), ::toupper);
        }
        answer.push_back(s);
    }
    return answer;
}