#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define nl '\n';

void solve(int i) {
    int cou = 0;
    string s = "codeforces";
    string s1;
    cin >> s1;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s[i]!=s1[i])
            cou++;
    }
    cout << cou << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) solve(i);
}

