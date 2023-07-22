// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
        
//     }
// };



class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int digits = 0;
            while (nums[i] > 0) {
                digits++;
                nums[i] /= 10;
            }
            if (digits % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};
