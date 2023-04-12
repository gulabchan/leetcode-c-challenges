//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        int x=n/2;
        
        for(int i=x; i<n; i++){
            
            arr[i]=5*arr[i];
        }
        sort(arr.begin(),arr.begin()+x);
        
        int i=x,ans=0;
        
        while(i<n){
            
            int idx=lower_bound(arr.begin(),arr.begin()+x,arr[i])-arr.begin();
            
            if(idx<x) ans+=(x-idx);
            
            i++;
        }
        
        return ans;
        
    }   
};




//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends