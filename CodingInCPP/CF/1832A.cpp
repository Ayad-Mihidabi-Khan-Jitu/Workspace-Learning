#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define nl '\n';

void solve(int i) 
{
    int m=0;
    string s;
    cin >> s;
    for (int i = 0; i < (s.size()/2)-1 ; i++)
    {
        if(s[i]!=s[i+1])
           m=1;
    }

    if(s.size() <= 3 or m == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) solve(i);
}

