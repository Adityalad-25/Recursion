/*
link -> https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

Example 1:

Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.
*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
     bool isSafe(int x, int y,int n ,vector<vector<int>> visited,vector<vector<int>> &m)
     {
         //path is in bound i.e not out of maze 
         if( (x>=0 && x<n ) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
             return true;
         }
         else return false;
     }
     
     void solve(vector<vector<int>> &m,int n,vector<string> &ans,int x,
                           int y, vector<vector<int>> visited,string path)
        {
             //base case 
             if(x==n-1 && y==n-1){
                 ans.push_back(path);
                 return;
             }
             
             visited[x][y]=1;
             
             // 4 choices D L R U
             
             //Down D
             int newx = x+1;
             int newy = y;
             if(isSafe(newx,newy,n,visited,m))
             {
                 path.push_back('D');
                 solve(m,n,ans,newx,newy,visited,path);
                 path.pop_back(); // backtrack
             }
             //Left L
              newx = x;
              newy = y-1;
             if(isSafe(newx,newy,n,visited,m))
             {
                 path.push_back('L');
                 solve(m,n,ans,newx,newy,visited,path);
                 path.pop_back(); // backtrack
             }
             //Up U
              newx = x-1;
              newy = y;
             if(isSafe(newx,newy,n,visited,m))
             {
                 path.push_back('U');
                 solve(m,n,ans,newx,newy,visited,path);
                 path.pop_back(); // backtrack
             }
             
             //Right R;
              newx = x;
              newy = y+1;
             if(isSafe(newx,newy,n,visited,m))
             {
                 path.push_back('R');
                 solve(m,n,ans,newx,newy,visited,path);
                 path.pop_back(); // backtrack
             }
             
             visited[x][y]=0; // for next possible we need mark 0 for next possible path;
                               
        }

   
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        
        // if m[0][0]=0 i.e the initial position is 0 that can move further 
        if(m[0][0]==0) return ans;
        
        
        int srcx = 0;
        int srcy = 0;
        // creating visited array 
        vector<vector<int>> visited = m;
        
        // initializing all places to 0;
        for(int i = 0 ;i<n;i++)
        {
            for(int j= 0;j<n;j++){
                visited[i][j]=0;
            }
        }
        
        string path = "";
        solve(m,n,ans,srcx,srcy,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
