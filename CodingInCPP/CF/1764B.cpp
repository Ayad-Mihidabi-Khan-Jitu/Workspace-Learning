//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//
//void solve(int i) {
//    set<int> s;
//    long long n, a[100000];
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//        s.insert(a[i]);
//    }
//
//    while (s.size()!=a[n-1])
//    {
//
//    }
//
//}
//
//
//int main()
//{
//    int t;
//    cin >> t;
//    for (int i = 0; i < t; i++) solve(i);
//}

///accepted
//#include<bits/stdc++.h>
//using namespace std;
//int gcd(int a, int b) {
//    if (b == 0)
//        return a;
//    return gcd(b, a % b);
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        int a[100000];
//        int maxx = INT_MIN;
//        for (int i = 0; i < n; i++) {
//            cin >> a[i];
//            maxx = max(maxx, a[i]);
//        }
//        int temp = a[0];
//        for (int i = 1; i < n; i++) {
//            temp = gcd(temp, a[i]);
//        }
//        int ans = maxx / temp;
//        cout << ans << endl;
//    }
//
//}