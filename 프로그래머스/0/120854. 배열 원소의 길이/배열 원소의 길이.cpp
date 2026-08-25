#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for(int i=0; i<strlist.size(); i++){
        int len = (strlist.at(i)).size();
        answer.push_back(len);
    }
    return answer;
}