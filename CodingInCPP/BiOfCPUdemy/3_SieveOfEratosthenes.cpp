#include<bits/stdc++.h>
using namespace std;
const int SIZE = 100005;
bool isPrime[SIZE];

///Sieve of Eratosthenes: useful to find prime numbers of a given range
/*
jekono prime number er nearest gunitok holo oi prime number er digun number ta
Algo:
*initialize isPrime as true
*start with 2 and check if isPrime[i] is true then mark all the multiple as false
*iterate upto sqrt(n)
*/

void sieveOfEratosthenes(int n)
{

    for (int i = 2; i <= n; i++)
    {
        isPrime[i] = true;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if(isPrime[i])
            for (int j = i*2; j <= n; j=j+i)
                isPrime[j] = false;
            
    }
}

int main()
{
    int n;
    cin >> n;
    sieveOfEratosthenes(n);
    //a range(3,12)
    for (int i = 10; i <= n; i++)
    {
        if(isPrime[i])
            cout << i << " ";
    }
    
}