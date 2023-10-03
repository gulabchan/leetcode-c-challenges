class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i,j,len=nums.size(),count=0;
        for(i=0;i<len;i++)
        {
            j=i+1;
            while(j<len)
            {
                if(nums[i]==nums[j])
                count++;
                j++;
            }
        }
        return count;
    }
};