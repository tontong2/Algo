#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
  int answer = 0; 
    unordered_set<string> s2_set(s2.begin(), s2.end());

    for(string str: s1){
        if(s2_set.find(str) != s2_set.end()){
            answer++;
        }
    }
    return answer;
    
}