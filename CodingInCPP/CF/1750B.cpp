//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		long long n, z = 0, one=0, x=0, con=-1;
//		cin >> n;
//		string a;
//		cin >> a;
//		for (int i = 0; i < n; i++) {
//			if (a[i] == '0') z++;
//			else one++;
//		}
//
//		for (int i = 0; i < n-1; i++) {
//			if (a[i] == a[i + 1]) { 
//				x++; 
//				if(con<=x) con = x + 1;
//			}
//			else {
//				x = 0;
//			}
//		}
//
//		long long cwh = one * z;
//		cout << max(cwh,con*con) << endl;
//
//	}
//}