//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) {
//        long long n,bou=0;
//        cin >> n;
//        vector <int> a,b,a0,a1;
//        for (int i = 0; i < n; i++) {
//            long long in;
//            cin >> in;
//            a.push_back(in);
//        }
//
//        for (int i = 0; i < n; i++) {
//            long long in;
//            cin >> in;
//            b.push_back(in);
//            bou = bou + 2 * (b[i]);
//        }
//
//        if (count(a.begin(), a.end(), 0) == count(a.begin(), a.end(), 1))
//            cout << bou - b[0] << endl;
//        else {
//            bou = 0;
//            int k = min(count(a.begin(), a.end(), 0), count(a.begin(), a.end(), 1));
//            //cout << "k :" << k << endl;
//
//            for (int i = 0; i < n; i++) {
//                if (a[i] == 0) a0.push_back(b[i]);
//                else a1.push_back(b[i]);
//            }
//
//            sort(a1.begin(), a1.end());
//            sort(a0.begin(), a0.end());
//            int gun = 0;
//            for (int i = a1.size() - 1; i >= 0; i--) {
//                gun++;
//                if (gun <= k) bou = bou + (a1[i]) * 2;
//                else bou = bou + (a1[i]);
//            }
//
//            gun = 0;
//            for (int i = a0.size() - 1; i >= 0; i--) {
//                gun++;
//                if (gun <= k) bou = bou + (a0[i]) * 2;
//                else bou = bou + (a0[i]);
//            }
//
//            cout << bou << endl;
//        }
//
//
//    }
//}