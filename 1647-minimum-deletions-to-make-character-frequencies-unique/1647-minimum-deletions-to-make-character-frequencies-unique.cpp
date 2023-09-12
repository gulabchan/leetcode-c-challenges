class Solution {
public:
    int minDeletions(string s) {
        map<char,int>m;
        set<int>st;
        int count=0;
        for(auto i:s){
            m[i]++;
        }
        for(auto i:m){
            while(i.second >0 and st.find(i.second)!=st.end()){
                i.second-=1;
                count++;
            }
            st.insert(i.second);
        }
        return count;;
    }
};