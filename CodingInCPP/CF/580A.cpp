//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    long long n, bou = 1, ans = 1;
//    cin >> n;
//    long long arr[100000];
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    
//    //2 2 1 3 4 1
//    //1 2 3 4 
//    for (int i = 1; i < n; i++) {
//        if (arr[i - 1] <= arr[i]) {
//            bou++;
//            ans = max(bou, ans);
//        }
//        else {
//            bou = 1;
//        }
//    }
//    cout << ans << endl;
//}
