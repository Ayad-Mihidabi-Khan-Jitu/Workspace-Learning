//#include<bits/stdc++.h>
//#include <cstdint>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//#define nl cout<<endl;
//ll power(ll b, ll n) {
//    ll powx[100000];
//    powx[0] = 1;
//    for (int i = 1; i <= n; i++) {
//        powx[i] = powx[i - 1] * b;
//    }
//    return powx[n];
//}
//
//void solve(int i) {
//    int bou = 0, po = 0, ans = 0, num;
//    bool cholbo = true;
//    cin >> num;
//    //42
//    while(cholbo) {
//        for (int i = 1; i <= 9; i++) {
//            bou = i * power(10, po);
//            //cout << bou << endl;
//            if (bou <= num) ans++;
//            else {
//                cholbo = false;
//                break;
//            }
//        }
//        po++;
//
//    }
//    cout << ans << endl;
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
//    for (int i = 0; i < t; i++) solve(i);
//
//}