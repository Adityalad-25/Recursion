// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
// Example 1:

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:

// Input: n = 1
// Output: ["()"]

class Solution {
public:
    
    vector<string>ans;
    void helper(string &s,int op,int cl){
        //base condition
        if(op==0 && cl==0){
            ans.push_back(s);
            return;
        }
        //for "("
        if(op>0) {
            s.push_back('(');
            helper(s,op-1,cl);
            s.pop_back();
        }
        //for ")"
        if(cl>0){
            if(op<cl){
            s.push_back(')');
            helper(s,op,cl-1);
            s.pop_back();
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        string s ;
        helper(s,n,n);
        return ans;
    }
};
