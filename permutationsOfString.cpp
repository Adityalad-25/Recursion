// Problem link :- https://www.codingninjas.com/studio/problems/permutations-of-a-string_985254
// leetcode link :- https://leetcode.com/problems/permutations/description/

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
