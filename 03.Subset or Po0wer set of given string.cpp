#include <iostream>
using namespace std;


void printSub(string str, string curr, int index)
{
	if(index == str.length())
	{
		cout<<curr<<" ";
		return;
	}

	// not include s[i] in the array
	printSub(str, curr, index + 1);
	//include s[i] in the array
	printSub(str, curr+str[index], index + 1);
}
	
int main() {
	
	string str = "ABC";
    	
    printSub(str, "", 0);
	
	return 0;
}
