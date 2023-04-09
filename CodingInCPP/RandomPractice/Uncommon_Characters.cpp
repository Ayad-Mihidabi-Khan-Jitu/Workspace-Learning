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
    string s1, s2, uncm;
    cin >> s1 >> s2;
    map<char, int> m1,m2;
    for (char i = 'a'; i <= 'z'; i++) {
        m1[i] = 0;
        m2[i] = 0;
    }

    for (int i = 0; i < s1.size(); i++) m1[s1[i]]++;
    for (int i = 0; i < s2.size(); i++) m2[s2[i]]++;

    for (char i = 'a'; i <= 'z'; i++) {
        //if ((m1[i] + m2[i]) - (2 * (m1[i] * m2[i])) > 0) {
        if (m1[i]^m2[i]) {
            int Xor = m1[i] ^ m2[i];
            cout << m1[i] << " ^ " << m2[i] << " = " << Xor << nl;
            uncm.push_back(i);
            //cout <<"Un: " << m1[i] << " " << m2[i] << nl;
        }
    }
    cout << "Uncommon: " << uncm << nl;


}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) solve(i);

}
