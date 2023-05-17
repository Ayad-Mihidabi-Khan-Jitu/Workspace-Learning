#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define nl '\n';

void solve(int i) 
{
    int cou = 0,mcou=0;
    int n,num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        //0 0 1 0 0 0 1 1 1
        cin >> num;
        if(num == 0)
        {
            cou++;
            mcou = max(mcou, cou);
        }
        else 
        {
            cou = 0;
        }
        
    }
    cout << mcou << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) solve(i);
}

