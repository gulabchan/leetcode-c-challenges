class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid; // Found the target
            }
            
            // Check which side is sorted
            if (nums[left] <= nums[mid]) {
                // Left side is sorted
                if (nums[left] <= target && target < nums[mid]) {
                    // Target is in the left sorted side
                    right = mid - 1;
                } else {
                    // Target is in the right unsorted side
                    left = mid + 1;
                }
            } else {
                // Right side is sorted
                if (nums[mid] < target && target <= nums[right]) {
                    // Target is in the right sorted side
                    left = mid + 1;
                } else {
                    // Target is in the left unsorted side
                    right = mid - 1;
                }
            }
        }
        
        return -1; // Target not found
    }
};