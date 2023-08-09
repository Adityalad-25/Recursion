/*
problem link : - https://practice.geeksforgeeks.org/problems/josephus-problem/1
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
       
         if(n == 1)
	    	return 1;
	 
	     int x = (josephus(n - 1, k) + k) % n; //recursive call for n-1 after killing one by one
	     if(x==0)
	     return n;
	     else
	     return x;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends
