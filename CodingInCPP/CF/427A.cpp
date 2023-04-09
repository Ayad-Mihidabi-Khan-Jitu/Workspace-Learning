//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    long long n, bou = 0, mi = 0;
//    cin >> n;
//    long long arr[100000];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    //-1 1 1 -1
//    //-1 2 3 -1 1 -1 -1 
//    for (int i = 0; i < n; i++) {
//        if (arr[i] > 0) {
//            bou=bou+arr[i];
//        }
//        if (arr[i] < 0 && bou <= 0) {
//            mi++;
//        }
//        else if (arr[i] < 0) bou--;
//    }
//    cout << mi << endl;
//}
