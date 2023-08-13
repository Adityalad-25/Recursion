// link -> https://www.codingninjas.com/studio/problems/print-subsequences_8416366?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
/*
instead of " " string we need to print "'Empty String'" 
'Empty String'
a
ab
abc
ac
b
bc
c
*/

  void  solve(string str,int pos,string output,vector<string>&ans)
  {
      
      //base case 
      if(pos>=str.length())
      {
          if (output.empty()) {
            ans.push_back("'Empty String'");
        } else {
            ans.push_back(output);
        }
        return;
      }
      //not include 
      solve(str,pos+1,output,ans);
      //include
      output.push_back(str[pos]);
      solve(str,pos+1,output,ans);
}


vector<string> generateSubsequences(string str)
{
    vector<string>ans;
    int pos;
   string output = "";
   solve(str,0,output,ans);
   return ans;
}
