#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    set<set<int>> hs;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]-arr[j]==k)
            {
                set<int> pset;
                pset.insert(arr[i]);
                pset.insert(arr[j]);
                hs.insert(pset);
            }
            
        }
    }

    cout << hs.size() << endl;
}