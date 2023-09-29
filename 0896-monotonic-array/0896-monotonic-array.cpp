class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
//         bool flag = false;
//         bool flag1 = false;
        
        
    
        int n=nums.size();
        
        for(int i=0;i<n-1;i++){
            
            // for increasing
            
            if(nums[0]<=nums[n-1]){
                if(nums[i]>nums[i+1]){
                     return false;
                }
               
            }
               
            
            //for decreasing
             if(nums[0]>=nums[n-1]){
                 if(nums[i]<nums[i+1]){  
                      return false;
                 }
           
            }
        }
        return true;
        
    }

};