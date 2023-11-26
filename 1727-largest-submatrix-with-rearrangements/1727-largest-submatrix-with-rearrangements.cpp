class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(0), cout.tie(0), cin.tie(0);
        int ans=0,n=matrix.size(),m=matrix[0].size(),i,j,mn,cnt=0;
        vector<vector<int>>use(n,vector<int>(m));
        for(i=0;i<m;i++)
            if(matrix[0][i]==1)
                use[0][i]=1,cnt++;
        ans=max(ans,cnt);
        int help[100000];
        for(i=1;i<n;i++){
            cnt=0;
            for(j=0;j<m;j++)
                if(matrix[i][j]==1)
                    use[i][j]=use[i-1][j]+1,help[cnt++]=use[i][j];
            sort(help,help+cnt);
            mn=1e9;
            for(j=cnt-1;j>=0;j--)
                mn=min(mn,help[j]),ans=max(ans,(cnt-j)*mn);
        }
        return ans;
    }
};