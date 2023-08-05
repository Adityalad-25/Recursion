#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int MOD = 1e9+7; 

int power(int a, int b)
{
    if (b == 0) return 1;

    int x = power(a, b / 2) % MOD;
    int result = (x * x) % MOD;

    if (b & 1)
        result = (result * a) % MOD;

    return result;
}

//gfg :- https://practice.geeksforgeeks.org/problems/abset-25327/1 
//check properly for modular arithmetic case 
// const long long int MOD = 1e9+7;

// class Solution{   
// public:
//     long long int power(int a, long long int b) { 
        
//         if (b == 0) {
//             return 1;
//         }
            
//         if (b == 1) {
//             return a;
//         }
        
//         long long int c = power(a, b/2);
            
//         if (b % 2 == 0) {
//             return (c * c) % MOD;
//         } 
        
//         else {
//             return (((c * c) % MOD) * a) % MOD;
//         }
//     }
// 
//};

int32_t main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);
    cout << ans;

    return 0;
}
