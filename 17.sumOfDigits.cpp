/*
/*
  example :- 1232 
  sum(123)+2;
  123+2; n/10 + n%10;
  12+3;
  1+2;
  0+1
   */
*/
#include<iostream>
using namespace std;

int sum(int n){
	//base case
    if(n==0) return 0;

	// int last_digit = n%10;
	// int remaining = n/10;
       //cout<<n/10<<" "<<n%10<<endl;  // how digits get divided in each step
	return sum(n/10)+n%10;
}


int main()
{
    
    int n;
    cin>>n;
    cout<<sum(n);
}
