//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//#define nl cout<<endl;
//
//ll powx[10000000];
//long long factorial(long long);
//
//long long nCr(ll n, ll r) {
//    long long result;
//    result = (factorial(n)) / (factorial(r) * factorial(n-r));
//    return result;
//}
//
//long long factorial(long long n) {
//    long long result=1;
//    for (long long i = 1; i <= n; i++) {
//        result = result * i;
//            //5! = 5 4 3 2 1
//    }
//    return result;
//}
//
//bool isPrime(int n) {
//    vector<bool> is_prime(n + 1, true);
//    is_prime[0] = is_prime[1] = false;
//    for (int i = 2; i <= n; i++) {
//        if (is_prime[i] && (long long)i * i <= n) {
//            for (int j = i * i; j <= n; j += i)
//                is_prime[j] = false;
//        }
//    }
//    return (is_prime[n] == true);
//}
//
//ll power(ll b, ll n) {
//    powx[0] = 1;
//    for (int i = 1; i <= n; i++) {
//        powx[i] = powx[i - 1] * b;
//    }
//    return powx[n];
//}
//
//int findodd(int arr[], int n)
//{
//    int res = 0, i;
//    for (i = 0; i < n; i++)
//        res ^= arr[i];
//    return res;
//}
//
//void substring(string s, int i, string cur)
//{
//    if (i == s.size())
//    {
//        cout << cur << endl;
//        return;
//    }
//    substring(s, i + 1, cur + s[i]);
//    substring(s, i + 1, cur);
//}
//ll ch2digit(char s)
//{
//    char charvalue = s;
//    ll number = (int(charvalue) + 0);
//    return number - 97;
//}
//ll Sqrt(ll x)
//{
//    ll l = 1, r = 1e9, ans = 0;
//    while (l <= r)
//    {
//        ll mid = (l + r) >> 1;
//        if (mid * mid <= x)
//        {
//            ans = mid;
//            l = mid + 1;
//        }
//        else
//        {
//            r = mid - 1;
//        }
//    }
//    return ans;
//}
//void permutaion(string s, int l, int r)
//{
//    if (l == r)
//    {
//        cout << s << endl;
//        return;
//    }
//    for (int i = l; i <= r; i++)
//    {
//        swap(s[l], s[i]);
//        permutaion(s, l + 1, r);
//        swap(s[l], s[i]);
//    }
//}
//bool pallindrome(string s, int l, int r)
//{
//    /// cout<<"main string : "<<s<<endl;
//    if (l >= r)
//        return true;
//    if (s[l] != s[r])
//        return false;
//    return pallindrome(s, l + 1, r - 1);
//}
//char int2char(int N)
//{
//    return char(N);
//    // return 0;
//}
//
//void solve(int i) {
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    bool bou = true;
//    
//    
//        for (int i = 0; i <=n-2; i = i + 3) {
//            if (s[i + 1] == s[i + 2]);
//            //addonn
//            else {
//                bou = false;
//                break;
//            }
//            
//        }
//        if (n == 1)
//        {
//            cout << "YES" << endl;
//        }
//        else if (n == 2)
//        {
//            cout << "NO" << endl;
//        }
//        else if (bou) cout<< "YES" << endl;
//        else  cout<< "NO" << endl;
//         
//    }
//    
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(0);
//    int t;
//    cin >> t;
//    for (int i = 0; i < t; i++) solve(i);
//    
//}