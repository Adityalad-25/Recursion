/*
link -> https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

Problem Statement
Suggest Edit
You are given an integer ’n’.
Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.
The factorial number is a factorial of a positive integer, like 24 is a factorial number, as it is a factorial of 4.
*/

vector<long long> factorialNumbers(long long n) {
     vector<long long> result;

    long long fact = 1;
    long long i = 1;

    while (fact <= n) {
        result.push_back(fact);
        i++;
        fact *= i;
    }

    return result;
}
