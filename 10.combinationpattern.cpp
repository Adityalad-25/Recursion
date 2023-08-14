#include<iostream>
using namespace std;
/* pattern one
1 2 3 4 5.....
1 2 3 4 
1 2 3 
1 2 
1  ->> imp base case here do check 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 ......
*/

void patternPrint(int n)
{
	//base case
	//if(n==0) return; //this condition prints 1 twice but we need it only once
    
    if(n==1)
    {
    	cout<<1<<"\n"; //if not printed 1 then 1 gets skipped
    	return;
    }

   
	for(int i = 1 ;i<=n;i++){ // print first line by urself -> 1 2 4 5.....
		cout<<i<<" ";
	}
	cout<<"\n";

	patternPrint(n-1); //Trust and call func for middle part 
	

	for(int i = 1 ;i<=n;i++){ // print last line by urself -> 1 2 3 4 5......
		cout<<i<<" ";
	}
	cout<<"\n";
}


int main()
{
	int n;
	cin>>n;

	patternPrint(n);
	
}
