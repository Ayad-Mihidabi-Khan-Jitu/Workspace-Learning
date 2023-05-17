#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define nl '\n';

void solve(int i) 
{
    int n,m;
    string skill;
    vector<pair<ll, string>> pr;
    cin >> n;
    while (n--)
    {        
        cin >> m >> skill;
        //cout<<m<<" "<<skill;
        pr.push_back({m, skill});
    }

    vector<ll> mini11;
    vector<ll> mini01;
    vector<ll> mini10;
    for (int i = 0; i < pr.size(); i++)
    {
        if(pr[i].second=="11")
        {
            mini11.push_back(pr[i].first);
        }
        else
        {
            if(pr[i].second=="01")
            {
                mini01.push_back(pr[i].first);
            }
            if(pr[i].second=="10")
            {
                mini10.push_back(pr[i].first);
            }
        }

    }
    sort(mini11.begin(),mini11.end());
    sort(mini10.begin(),mini10.end());
    sort(mini01.begin(),mini01.end());

    if((mini01.size()==0 or mini10.size()==0) and mini11.size()==0)
    {
        cout << -1 << endl;
    }
    else
    {
        //cout << mini01[0] << mini10[0] << mini11[0];
        if(mini01.size()==0)
            mini01.push_back(INT32_MAX);
        if(mini10.size()==0)
            mini10.push_back(INT32_MAX);
        if(mini11.size()==0)
            mini11.push_back(INT32_MAX);

        long long mini1001 = mini01[0] + mini10[0];
        long long ans = min(mini1001, mini11[0]);
        cout << ans << endl;
    }
 
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) solve(i);
}

