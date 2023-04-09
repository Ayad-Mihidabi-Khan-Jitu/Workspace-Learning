/////Sol.2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		map<int,int> op; int ans = 0,n,c,a;
//		cin >> n >> c;
//		for (int i = 0; i < n; i++) {
//			cin >> a;
//			op[a]++;
//		}
//		for (auto it : op) {
//			if (it.second >= c) ans = ans + c;
//			else ans = ans + it.second;
//		}
//		cout << ans << endl;
//	}
//}
//
///*
/////Sol.1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		long long a[101],c,n,bou[101],j=0,k=0,l=0,ans=0;
//		cin >> n>> c;
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		sort(a, a + n);
//		for (j = 0; j < n; j=k) {
//			int ele = 1;
//			for (k = j+1; k < n; k++) {
//				if (a[j] == a[k]) ele++;
//				else break;
//			}
//			bou[l++] = ele;
//		}
//
//		for (int i = 0; i < l; i++) {
//			if (bou[i] >= c) bou[i] = c;
//			ans = ans + bou[i];
//			//cout << bou[i] << " ";
//		}//cout << endl;
//		cout << ans << endl;
//
//
//
//
//	}
//}
//*/