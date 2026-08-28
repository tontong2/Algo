#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    size_t size1 = arr1.size();
    size_t size2 = arr2.size();
    int total1 = 0, total2 = 0;
    
    if(size1 != size2){
        answer = size1 < size2? -1 : 1;
        return answer;
    }
    
    for(int i=0; i<size1; i++){
        total1 += arr1[i];
        total2 += arr2[i];
    }
    
    answer = total1 < total2 ? -1 : 1;
    if(total1 == total2) answer = 0;
    
    return answer;
}