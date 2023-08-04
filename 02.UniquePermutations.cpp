//leetcode link :- https://leetcode.com/problems/permutations-ii/description/
// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
// Example 1:
// Input: nums = [1,1,2]
// Output:
// [[1,1,2],
//  [1,2,1],
//  [2,1,1]]
// Example 2:
// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]


class Solution {
public:
    void solve(vector<int>& s, vector<vector<int>>& ans, int pos) {
        // Base case
        if (pos >= s.size()) {
            ans.push_back(s);
            return;
        }
        
        unordered_set<int> s1; // set is removes the duplicate elements
        
        for (int i = pos; i < s.size(); i++) {
            if(s1.find(s[i])!= s1.end()) continue; //skip duplicates
            s1.insert(s[i]); // insert into set so that no duplicate value occurs
            swap(s[i], s[pos]);
            solve(s, ans, pos + 1);
            swap(s[i], s[pos]);
        }
    }
   
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};
