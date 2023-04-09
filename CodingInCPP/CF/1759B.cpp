//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//#define nl cout<<endl;
//
//ll powx[10000000];
//
//ll power(ll b, ll n) {
//powx[0] = 1;
//for (int i = 1; i <= n; i++) {
//	powx[i] = powx[i - 1] * b;
//}
//return powx[n];
//}
//
//int findodd(int arr[], int n)
//{
//	int res = 0, i;
//	for (i = 0; i < n; i++)
//		res ^= arr[i];
//	return res;
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
//    ll m, s, b[100000],sum=0,bou=0,maxx=INT_MIN;
//    cin >> m >> s;
//    for (int i = 0; i < m; i++) {
//        cin >> b[i];
//        maxx = max(maxx, b[i]);
//        sum = sum + b[i];
//    }sum = sum + s;
//
//
//    string ans;
//    while (1) {
//        long long test = ((maxx * (maxx + 1)) * 0.5) - sum;
//        if (test == 0) {
//            ans = "Yes";
//            break;
//        }
//        else if (test < 0) {
//            maxx = maxx + 1;
//        }
//        else if (test > 0) {
//            ans = "No";
//            break;
//        }
//    }
//
//    cout << ans << endl;
//
//    
//    
//
//}
//
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(0);
//    int t = 1;
//    cin >> t;
//    for(int i=0;i<t;i++) solve(i);
//}