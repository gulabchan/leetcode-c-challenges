

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};


/*

    Time Complexity : O(MlogM), Sorting the array(nums1) costs O(MlogM). Where M is the size of the
    Array(nums1).

    Space Complexity : O(1), Constant Space. 

    Solved using Array + Sorting.

*/