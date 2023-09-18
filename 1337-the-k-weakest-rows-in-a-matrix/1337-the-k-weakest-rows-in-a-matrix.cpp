class Solution {
public:
    class compare{
        public:
            bool operator()(pair<int,int>&a,pair<int,int>&b){
        if(a.first == b.first){
            return a.second > b.second;
        }
        else{
            return a.first > b.first;
        }
    }
    };

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,compare>pq;
        for(int i = 0;i<mat.size();i++){
            int count = 0;
            for(int j = 0;j < mat[0].size();j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            pq.push({count,i});
        }

        vector<int>ans;
        for(int i = 0;i<k;i++){
            pair<int,int>temp = pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }

        return ans;
    }
};