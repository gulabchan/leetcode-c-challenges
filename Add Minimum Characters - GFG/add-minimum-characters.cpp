//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
 bool ispalindrome(string s)
 {
     int i=0,j=s.size()-1;
     while(i<j)
     {
         if(s[i]!=s[j])
         return false;
         else 
         i++;
         j--;
     }
     return true;
 }
    int addMinChar(string str){    
        //code here
        if(ispalindrome(str)==true)
        return 0;
        for(int i=str.length()-1;i>=0;i--)
        {
            if(ispalindrome(str.substr(0,i)))
            {
                return str.length()-i;
            }
        }
        return str.length();
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends