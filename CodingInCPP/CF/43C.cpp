//#include <bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//bool compa(const pair<char, int>& a, const pair<char, int>& b) {
//    return (a.second > b.second);
//}
//
//int main()
//{
//    int t = 1;
//    //cin>>t;
//    //cin.ignore();
//    while (t--) {
//        int n, bou = 0;
//        cin >> n;
//        vector<string> a;
//        for (int i = 0; i < n; i++) {
//            string h; cin >> h;
//            a.push_back(h);
//        }
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                string num = a[i] + a[j];
//                cout << num << endl;
//                ll sum = 0;
//                for (int k = 0; k < num.size(); k++) {
//                    sum = sum + (num[k] - '0');
//                    cout << "sum: " << sum;
//                }cout << endl;
//                if (sum % 3 == 0) {
//                    cout << a[i] << " " << a[j] << endl;
//                    a[i] = ""; a[j] = "";
//                    bou++;
//                }
//            }
//        }
//        cout << bou << endl;
//    }
//}
