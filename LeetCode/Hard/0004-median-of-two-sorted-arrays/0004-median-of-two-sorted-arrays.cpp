class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len = nums1.size() + nums2.size();
        double result = 0; 

        vector<int> arr = nums1;
        for(auto e: nums2){
            arr.emplace_back(e);
        }

        sort(arr.begin(), arr.end());
        result = len%2==0 ? (double)(arr[len/2]+arr[len/2 -1])/2 : arr[len/2];

        return result;
    }
};