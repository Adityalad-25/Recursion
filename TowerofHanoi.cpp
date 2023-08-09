/*
problem link : - https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.
Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. Refer the provided link to get a better clarity about the puzzle.
Example 1:
Input:
N = 2
Output:
move disk 1 from rod 1 to rod 2
move disk 2 from rod 1 to rod 3
move disk 1 from rod 2 to rod 3
3
Explanation: For N=2 , steps will be
as follows in the example and total
3 steps will be taken.
Example 2:
Input:
N = 3
Output:
move disk 1 from rod 1 to rod 3
move disk 2 from rod 1 to rod 2
move disk 1 from rod 3 to rod 2
move disk 3 from rod 1 to rod 3
move disk 1 from rod 2 to rod 1
move disk 2 from rod 2 to rod 3
move disk 1 from rod 1 to rod 3
7
Explanation: For N=3 , steps will be
as follows in the example and total
7 steps will be taken.
*/




//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
     
     
          //  // move n-1 disks from a(from) to b(to) first by recursive call and c is used as auxillary
          //  //move last disk from a to c then; here b is used as auxillary
          //  //then finally using a as auxillary  move  disk from b to c by recursive call
         
              
          
   
    //  void ToH(int n, char A, char B, char C) 
    //  { 
    //         if (n == 1) 
    //         { 
    //             cout<<"Move 1 from " <<  A << " to " << C << endl; 
    //             return; 
    //         } 
             
    //         ToH(n-1, A, C, B);  moving n-1 disks to b from a
            
    //         cout<<"Move " << n << " from " <<  A << " to " << C << endl; //moving last disk from a to c
    //         ToH(n-1, B, A, C); 
    //   }
	
   
   
    long long toh(int N, int from, int to, int aux) {
        
        int count = 1;
       //base case
        if(N==1){
            cout<<"move disk "<<N<< " from rod " << from << " to rod "<<to<<endl;
            return 1;
        }
      
        count = count + toh(N-1,from,aux,to);  //move n-1 disks 'from' to 'to' using aux 
        cout<<"move disk " << N<<" from rod " << from << " to rod "<<to<<endl; //move last disk 'from' to 'to'
        count = count + toh(N-1,aux,to,from);  // move n-1 disks from 'aux' to 'from'
        return count;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends
