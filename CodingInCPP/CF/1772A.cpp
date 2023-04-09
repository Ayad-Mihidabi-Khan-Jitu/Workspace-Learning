#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define nl '\n';

bool Comparator(const pair<int, int>& a, const pair<int, int>& b)
{
    return (a.second < b.second);
}

bool isPrime(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return (is_prime[n] == true);
}

bool isPowOfTwo(ll n) {
    if ((n & (n - 1)) == 0) return true;
    else return false;
}

ll Power(ll base, ll power) {
    ll powx[10000];
    powx[0] = 1;
    for (ll i = 1; i <= power; i++) {
        powx[i] = powx[i - 1] * base;
    }
    return powx[power];
}

ll Sqrt(ll x)
{
    ll l = 1, r = 1e9, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) >> 1;
        if (mid * mid <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}
ll LCM_GCD(char choice, ll num1, ll num2) {
    // assign num1 and num2 values to int a and b  
    ll a = num1;
    ll b = num2;
    // use while loop to define the condition  
    while (num2 != 0)
    {
        ll temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    // assign num1 to gcd variable  
    ll gcd = num1;
    ll lcm = (a * b) / gcd;
    if (choice == 'l') return lcm;
    else return gcd;
}

void solve(int i) {
    ll a, b;
    char c;
    cin >> a >> c >> b;
    cout << a + b << endl;

}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) solve(i);
}