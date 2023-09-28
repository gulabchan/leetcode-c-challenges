class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(begin(nums), end(nums), [&] (int a, int b) {
            return (a&1)<(b&1);
        });
        return nums;
    }
};