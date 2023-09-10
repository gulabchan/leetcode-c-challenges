class Solution {
private:
    const int MOD=1e9+7;
    int helper(int idx) {
        //base case
        if(idx==1) return 1; 
        return (1LL * helper(idx-1)%MOD * (2*idx-1)*idx )%MOD;
    }
public:
    int countOrders(int n) {
        return helper(n);
    }
};