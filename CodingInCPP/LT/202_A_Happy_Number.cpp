#include<bits/stdc++.h>
using namespace std;
bool isHappy(int n) 
{
    int d;
    unordered_set<int> set;
    while(n!=1)
    {
        int s=0;
        while(n!=0)
        {
            d = n % 10;
            n = n / 10;
            //cout << d << endl;
            s = s + (d * d);
        }
        n = s;
        if(set.count(n))
            return false;
        set.insert(n);
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    cout << isHappy(n) << endl;
}