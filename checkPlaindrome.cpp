#include<iostream>
#include<string.h>
using namespace std;

bool checkpal(string &str,int i,int j)
{
	//base case
	if(i==j) return true;

	//check first and last character
	if(str[i]!=str[j]) return false; 

    // check for middle string
	if(i<j+1)
	return checkpal(str,i+1,j-1);
    return true;

}
bool ispalindrome(string &str)
{
	int n = str.length();
	if(n==0 || n==1) return true;

	return checkpal(str,0,n-1);
}

int main(){

	string str;
	cin>>str;

 
  bool ans = ispalindrome(str);
  cout<<ans;
}
