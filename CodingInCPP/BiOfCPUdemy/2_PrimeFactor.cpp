#include<bits/stdc++.h>
using namespace std;
int fact[100], ex[100], len=0;
/*
Prime factor of 6 is 2,3
Explanation:
6|2
3|3
1

30 = 15*2 = 3*5*2 
40 = 20*2 = 10*5*2 = 5*2*5*2 = 5^2 * 2^3
*/

///brute force approach
/*void primeFactor(int n)
{
    int d = 2;
    while (n>1)
    {
        int k = 0;
        while (n%d==0)
        {
            n = n / d;
            k++;
        }
        if(k>0)
        {
            len++;
            fact[len] = d;
            ex[len] = k;
        }
        d++;
    }
    
}*/

///optimized brute force approach: O(sqrt(n))
void primeFactor(int n)
{
    if(n==1)
    {
        len++;
        fact[len] = 2;
        ex[len] = 0;
        return;
    }
    int d = 2;
    while (n>1 && 1LL*d*d <= n)
    {
        int k = 0;
        while (n%d==0)
        {
            n = n / d;
            k++;
        }
        if(k>0)
        {
            len++;
            fact[len] = d;
            ex[len] = k;
        }
        d++;
    }
    //ei check ta n>1 and n is prime er jonno
    if(n>1)
    {
    len++;
    fact[len] = n;
    ex[len] = 1;
    }
    
    
}

int main()
{
    int n;
        cin >> n;
    primeFactor(n);
    for (int i = 1; i <= len; i++)
    {
        cout << fact[i] << "^" << ex[i] << '\n';
    }
        
}