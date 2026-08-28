#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    size_t len = arr.size();
    
    for(int i=0; i<len; i++){
        if(len%2 !=0 && i%2 == 0){
            answer.push_back(arr[i] + n);
            continue;
        }
        else if(len%2 == 0 && i % 2 != 0){
            answer.push_back(arr[i]+n);
            continue;
        }
        answer.push_back(arr[i]);
    }
    return answer;
}