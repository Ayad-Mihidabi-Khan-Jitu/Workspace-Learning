//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) {
//        ll n,a;
//        set<int> s;
//        map<int, int> m;
//        vector<int> v;
//        cin >> n;
//        for (ll i = 0; i < n; i++) {
//            cin >> a;
//            m[a]++;
//            s.insert(a);
//        }
//        ll len = s.size();
//        //cout << len << endl;;
//        for (auto i : m) {
//            //cout << i.first<<" " << i.second <<endl;
//            v.push_back(i.second-1);
//        }
//        ll maxx = *max_element(v.begin(), v.end());
//        if(n==1) cout << 0 << endl;
//        else if (len == n) cout << 1 << endl;
//        else cout << min(maxx, len)<<endl;
//        //for (auto i : v) {
//        //    cout << i << " ";
//        //}cout << endl;
//
//
//
//
//    }
//}
