#include <bits/stdc++.h>
using namespace std;
int n, k, i, j;
string s;
int a[10];
bool ch()
{
    if (s.size() == 1)
    {
        return ((s[0] - '0') % 8 == 0);
    }
    if (s.size() == 2)
    {
        return ((((s[0] - '0') * 10 + (s[1] - '0')) % 8 == 0) || (((s[1] - '0') * 10 + (s[0] - '0')) % 8 == 0));
    }
    if (s.size() > 2)

        for (i = 0; i < 10; i++)
            if (a[i])
            {
                a[i]--;
                for (j = 0; j < 10; j++)
                    if (a[j])
                    {
                        a[j]--;
                        for (k = 0; k < 10; k++)
                            if (a[k])
                                if ((i * 100 + j * 10 + k) % 8 == 0)
                                {
                                    cout<<"Dhukse ite "<< i << j << k << endl;
                                    cout<<"Dhukse "<< a[i] << a[j] << a[k] << endl;
                                    return 1;
                                }
                               cout<<"Baire "<< a[i] << a[j] << a[k] << endl; 
                        a[j]++;
                    }
                a[i]++;
            }
    return 0;
}
int main()
{
    cin >> n;
    while (cin >> s)
    {
        for (i = 0; i < 10; i++)
            a[i] = 0;
        for (i = 0; i < s.size(); i++)
            a[s[i] - '0']++;
        if (ch())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}