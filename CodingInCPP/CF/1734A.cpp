//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        long long a[301];
//        for (int i = 0; i < n; i++) {
//            cin >> a[i];
//        }
//        long long bou = 10000000000;
//        sort(a, a + n);
//        for (int i = 0; i < n-2; i++) {
//            long long sum = 0;
//            for (int j = i; j < 3+i; j++) {
//                //cout << a[j] << " ";
//                sum = sum + a[j];
//            }//cout << endl;
//            //cout << sum << " "<< a[i + 1] <<" ";
//            long long median = a[i+1], res = 0;
//            for (int j = i; j < 3 + i; j++) {
//                //cout << a[j] << " ";
//                res = res + abs(a[j]-median);
//            }
//            //cout << res << endl;
//            if (res < bou) bou = res;
//
//        }
//        cout << bou << endl;
//        //int n;
//    }
//}