//example:- 432 print [four three two]


#include<iostream>
#include<string.h>
using namespace std;

void printSpell(int n)
{
    string s[10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0) return ;
    printSpell(n/10);
    int number=n%10;
    cout<<s[number]<<" ";
   //or cout<<str[n%10];
}


int main ()
{
    int n;
    cin>>n;
    printSpell(n);
}
