class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=(max_element(arr.begin(),arr.end())-arr.begin());
        return ans;
        
    }
};

