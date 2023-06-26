#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    int col;
    cin>>col;

    for (int i = 0; i < q; i++)
    {
        int left, right;
        cin >> left >> right;
        while (left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    



}