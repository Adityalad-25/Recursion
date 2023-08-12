//Problem statement : - https://www.codingninjas.com/studio/problems/reverse-the-string_799927

#include <bits/stdc++.h> 

void rev(string &s,int i, int j){
     //base case
     if(i>j) 
	 {
		 return;
	 }
	 swap(s[i],s[j]);
	 i++;
	 j--;
	 rev(s,i,j);
}

string reverseString(string &str)
{
	rev(str,0,str.length()-1);
	return str;
}
