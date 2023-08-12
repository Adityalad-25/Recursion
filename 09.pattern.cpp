#include<iostream>
using namespace std;
/* pattern one
1
1 2
1 2 3
1 2 3 4......
*/
/* pattern two
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1*/

void patternPrint(int n)
{
	if(n==0) return;
	
	patternPrint(n-1); //Trust and call for n-1 lines first
	for(int i = 1 ;i<=n;i++){ // write for he last line by urself
		cout<<i<<" ";
	}
	cout<<"\n";
}

void patterntwo(int n){
    
    if(n==0) return;
    //base case
    for(int i = 1 ;i<=n;i++){ //print for first n lines
		cout<<i<<" ";
	}
    cout<<"\n";
	patterntwo(n-1);  //Trust the fun and call for n-1 lines;
	
	
}
int main()
{
	int n;
	cin>>n;

	patternPrint(n);
	cout<<"----------------\n";
	patterntwo(n);
}
