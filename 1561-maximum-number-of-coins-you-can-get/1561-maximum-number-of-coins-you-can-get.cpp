class Solution {
public:
    int maxCoins(vector<int>& piles) {      
        int maxi = 0 ;
        sort(piles.begin(),piles.end());
        int start = 0 ; 
        int end = piles.size()-1;
        while(start++<piles.size()/3) // loop will run pilesize/3 times as 3 piles are taken at a time  
        {
            maxi += piles[end-1];
            end = end-2;
        }
        return maxi;      
    }
};