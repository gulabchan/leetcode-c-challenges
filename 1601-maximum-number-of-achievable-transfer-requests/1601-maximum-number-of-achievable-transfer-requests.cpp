class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& req) {
        int ans = 0;  int m = req.size(); int limit = (1<<m);

        for (int state = 1; state<limit; state++) {
            vector<int> outdeg(n, 0), indeg(n, 0);  // indegree and outdegre of nodes formed by requests in state
			int tr = 0; // Total Requests in our current state (ie no of 1's in binary representation of state)
            for (int i = 0; i<m; i++) {
                if ((state&(1<<i)) != 0) {
                    int u(req[i].front()), v(req[i].back());
                     outdeg[u]++; indeg[v]++; tr++;
                }
            }

            int evenn = 0; // total number of even degree nodes, formed by requests in our current state
			int tn = 0; // total nodes covered by requests in our current state
            for(int i = 0; i<n; i++) {
                if (indeg[i] > 0) tn++; 
                if (indeg[i]>0 && indeg[i] == outdeg[i]) evenn++;
            }

			
            if (evenn == tn) ans = max(ans, tr);
        }

        return ans;
    }
};