//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
import java.lang.*;

class GFG {
    public static void main(String args[]) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int test = Integer.parseInt(br.readLine());
		while(test-- > 0) {
			int N = Integer.parseInt(br.readLine());
			int [] A = new int[N];
			String [] str = br.readLine().trim().split(" ");
			for(int i = 0; i < N; i++)
				A[i] = Integer.parseInt(str[i]);
			Solution ob = new Solution();
			System.out.println(ob.equalSum(A, N));
		}
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
	int equalSum(int [] nums, int N) {
		//Write your code here
	    int start = 0;
	    int sum =  0;
	    for(int i=0;i<N;i++){
	        sum += nums[i];
	    }
	    for(int i=0;i<N;i++){
	        sum -= nums[i];
	        if(sum == start){
	            return i+1;
	        }
	        start += nums[i];
	    }
	    
	    return -1;
	}
}