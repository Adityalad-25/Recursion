/*link -> https://leetcode.com/problems/powx-n/description/
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
Example 1:
Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
*/

class Solution {
public:
    double myPow(double x, int n) {
        //base case 
        if(n==0) return 1;

        //handle for n<0 or -ve value of n;
        long long ln = n; 
         if (n < 0) {
            x = 1 / x;
            ln = -ln;
        }
        double ans = myPow(x,ln/2); //remember to do ln/2 not x/2;
        if(n&1)
        return x*ans*ans;
        else return ans*ans;


    }
};
