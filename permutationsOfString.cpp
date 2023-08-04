// leetcode link :- https://leetcode.com/problems/permutations/description/
/*Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
Example 1:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:
Input: nums = [0,1]
Output: [[0,1],[1,0]]
*/
class Solution {
public:
       void solve(vector<int>&s,vector<vector<int>>&ans,int pos)
       {
           //base case
           if(pos>=s.size()){
               ans.push_back(s);
               return;
           }

           for(int i = pos ; i<s.size() ; i++){
               swap(s[i],s[pos]);
               solve(s,ans,pos+1);
               swap(s[i],s[pos]);
           }
       }
   
   
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
         int index = 0;
         solve(nums,ans,index);
         return ans;
    }
};

//-----------------------------------------------------------------------------------

// Problem link :- https://www.codingninjas.com/studio/problems/permutations-of-a-string_985254
// FOR STRING 
#include<bits/stdc++.h>

void per(int pos,string &s ,vector<string>&ans){
    //base case 
    if(pos>=s.size()){
        ans.push_back(s);
       return;
    }

    for(int i=pos;i<s.size();i++){
        swap(s[i],s[pos]);
        per(pos+1,s,ans);
        swap(s[i],s[pos]); // backtracking
    }
}
vector<string> generatePermutations(string &str)
{
    vector<string>ans;
    per(0,str,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
