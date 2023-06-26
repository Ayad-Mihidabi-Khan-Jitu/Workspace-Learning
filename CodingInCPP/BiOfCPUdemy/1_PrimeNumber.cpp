#include<bits/stdc++.h>
using namespace std;

///brute force approach
/*bool isPrime(int n)
{
    //1 or less than 1 hole false
    if(n<=1) return false;
    //otherwise check it is divisible by any number except 1 or itself
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}*/

///optimized brute force: O(sqrt(n))
// n = a*b where a <= b
// so b=n/a
// n=a*a so a=sqrt(n)
bool isPrime(int n)
{
    if(n<=1) return false;
    //otherwise check it is divisible by any number except 1 or itself upto sqrt of the number
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
        cin >> n;
        cout << isPrime(n);
}