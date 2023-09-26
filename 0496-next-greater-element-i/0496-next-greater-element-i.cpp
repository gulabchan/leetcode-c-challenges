 // 1. create a stack
    // 2. push last element into stack
    // 3. also add -1 for last element into map
    // 4. then add pairs of element with their closet greater element
    // 5. search for nums1 element
    // 6. add the greater into array
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> s;
    s.push(nums2[nums2.size()-1]);
    vector<int> res;
    unordered_map<int,int> mp;
    mp[nums2[nums2.size()-1]] = -1;

    for(int i=nums2.size()-2;i>=0;i--) {
        while(!s.empty() && s.top()<nums2[i]) {
            s.pop();
        }

        mp[nums2[i]] =  s.empty() ? -1 : s.top();
        s.push(nums2[i]);
    }

    for (auto &i : nums1) {
        if (mp.find(i) != mp.end()) {
            res.push_back(mp[i]);
        }
    }
    return res;
}

};