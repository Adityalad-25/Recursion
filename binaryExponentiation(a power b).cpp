#include<iostream>
using namespace std;

int power(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    
    int x = power(a,b/2);
    //odd power
    if(b&1) return a*x*x;
    //even power
    else return x*x;
}

int main()
{
    int a,b;
    cin>>a>>b;
    
    int ans = power(a,b);
    cout<<ans;
}
//time complexity : - o(log b )
