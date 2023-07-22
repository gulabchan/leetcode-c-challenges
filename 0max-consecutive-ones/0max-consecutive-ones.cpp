class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0, currentOnes = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentOnes++;
            } else {
                if (currentOnes > maxOnes) {
                    maxOnes = currentOnes;
                }
                currentOnes = 0;
            }
        }
        if (currentOnes > maxOnes) {
            maxOnes = currentOnes;
        }
        return maxOnes;
    }
};
