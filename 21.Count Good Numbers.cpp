#define mod 1000000007
class Solution {
public:
   
   long long power(long long x, long long n) // x^n;
   {
       //base case 
       if(n==0) return 1;

       long long ans = power(x,n/2);
       if(n&1)//odd power
       {
           return ((x*ans)%mod*ans%mod);
       }
       return ans*ans%mod;
   }
   
    int countGoodNumbers(long long n) {
        // long long even = n+1/2;
        // long long odd = n/2;

        return (power(5,(n+1)/2)*power(4,n/2)%mod);
    }
};
