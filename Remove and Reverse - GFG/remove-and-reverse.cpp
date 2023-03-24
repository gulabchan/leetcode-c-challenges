//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
        // code here
        int n=s.length();
        vector<int> freq(26,0);
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        int i=0,j=n-1;
        bool rev=false;

        while(i<j){
            if(!rev){
                if(freq[s[i]-'a']>1){
                    freq[s[i]-'a']--;
                    s.erase(i,1);
                    rev=!rev;
                    j--;
                }
                else i++;
            }
            else{
                if(freq[s[j]-'a']>1){
                    freq[s[j]-'a']--;
                    s.erase(j,1);
                    rev=!rev;
                }
                j--;
            }
        }
        if(rev) reverse(s.begin(),s.end());
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends