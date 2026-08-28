#include <string>
#include <vector>

using namespace std;

vector<int> right(vector<int> arr){
    vector <int> temp;
    size_t len = arr.size();
    temp.push_back(arr[len-1]);
    for(int i=0; i<len-1; i++){
        temp.push_back(arr[i]);
    }
    return temp;
}

vector<int> left(vector<int> arr){
    vector <int> temp;
    size_t len = arr.size();
    for(int i=1; i<len; i++){
        temp.push_back(arr[i]);
    }
    temp.push_back(arr[0]);
    return temp;
}

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    answer = direction == "right" ? right(numbers) : left(numbers);
    
    return answer;
}