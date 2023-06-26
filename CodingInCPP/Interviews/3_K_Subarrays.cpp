#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> k >> n;
    long long arr[n],cumsum=0,rem;
    unordered_map<int, int> remap;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cumsum = cumsum + arr[i];
        rem = ((cumsum % k) + k) % k;
        remap[rem]++;
    }
    int result = remap[0];
    //cout << "r " << result << endl;
    for (int i = 0; i < k; i++)
    {
        if(remap[i]>1)
        {
            result = result + (remap[i] * (remap[i] - 1)) / 2;
        }
    }
    cout << result << endl;
}