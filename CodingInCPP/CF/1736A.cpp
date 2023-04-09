//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		long long n, ans, a[101], b[101],omil=0, diff0=0,za=0,zb=0;
//		cin >> n;
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//			if (a[i] == 0) za++;
//		}
//
//		for (int i = 0; i < n; i++) {
//			cin >> b[i];
//			if (b[i] == 0) zb++;
//		}
//		diff0 = abs(za - zb);
//		for (int i = 0; i < n; i++) {
//			if (a[i] != b[i]) omil++;
//		}
//
//		if (diff0 == 0 and omil == 0) cout << 0 << endl;
//		else if (diff0 == 0 and omil > 1) cout << 1 << endl;
//		else if (omil == diff0) cout << omil << endl;
//		else cout << diff0 + 1 << endl;
//
//
//	}
//}