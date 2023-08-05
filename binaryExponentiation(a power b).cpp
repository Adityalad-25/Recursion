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

int32_t main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);
    cout << ans;

    return 0;
}
