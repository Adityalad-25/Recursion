#include<iostream>
#define int long long int
using namespace std;

// recursive function
int binpow(int a , int b){

	//base case
	if(b==0) return 1;

	// calculating b/2 
	int x = binpow(a,b/2);

	//odd power
	if(b&1) return a*x*x;
	//even power
	else return x*x;

}

int binPowTwo(int n)  // 2^n ;
{
	if(n==0) return 1;

	int ans = binPowTwo(n/2);
    //for odd power
	if(n&1) return 2*ans*ans;
    // for even power
	else return ans*ans;

}



int32_t main()
{
	// int a,b;
	// cin>>a>>b;

	// int ans = binpow(a,b);
	// cout<<ans;
	int n;
	cin>>n;
	cout<<binPowTwo(n);
}
