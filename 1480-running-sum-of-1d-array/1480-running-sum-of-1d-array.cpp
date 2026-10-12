class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> answer; 
        int sum = 0;
        for(auto e: nums){
            sum += e;
            answer.emplace_back(sum);
        }
        return answer;
    }
};