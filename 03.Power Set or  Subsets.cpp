/*Leetcode:-
Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Total Subsets = 2^N including empty set where N is size of given array 
*/

class Solution {
public:
     vector<vector<int>> ans;
    void generate(vector<int>&subset,int i,vector<int>& nums)
    {
       
       if(i==nums.size()){
         ans.push_back(subset);
         return;
       }

        // ith element not included in subset
        generate(subset,i+1,nums);

        //ith elememnt is included in subset
        subset.push_back(nums[i]);
        generate(subset,i+1,nums);
        subset.pop_back(); //backtracking


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>empty;
        generate(empty,0,nums);
        return ans;
    }
};
