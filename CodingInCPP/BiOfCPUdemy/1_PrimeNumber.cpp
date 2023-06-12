#include<bits/stdc++.h>
using namespace std;

///brute force approach
/*bool isPrime(int n)
{
    if(n<=1) return false;
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