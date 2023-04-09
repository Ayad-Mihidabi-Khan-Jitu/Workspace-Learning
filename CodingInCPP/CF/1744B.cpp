/////accepted
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, q, t[2], x[10001], even = 0, odd = 0, t0 = 0, t1 = 0;
//		cin >> n >> q;
//		long long a[100001], ans = 0, bou = 0, sum = 0;
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//			if (a[i] % 2 == 0) even++;
//			else odd++;
//			sum += a[i];
//		}
//		bou = sum;
//		for (int i = 0; i < q; i++) {
//			cin >> t[i] >> x[i];
//			if (t[i] == 0) { 
//				bou = bou + x[i] * even; 
//			}
//			if (t[i] == 1) {
//				bou = bou + x[i] * odd;
//			} 
//			if (t[i] == 1 and (x[i] % 2 == 1)) {
//				even = even + odd;
//				odd = 0;
//			} 
//			if (t[i] == 0 and (x[i] % 2 == 1)) {
//				odd = odd + even;
//				even = 0;
//			} 
//			cout << bou << endl;
//			
//		}
//		    //6 7
//			//1 3 2 4 10 48
//			//1 6 -> //7 9 2 4 10 48
//			//0 5 -> //7 9 7 9 15 53 
//			//0 4 -> //7 9 7 9 15 53
//			//0 5 -> //7 9 7 9 15 53
//			//1 3 -> //10 12 10 12 18 56
//			//0 12
//			//0 1
//		    ///80
//			///100
//			///100
//			///100
//			///118
//			///190
//			///196
//	}
//}
///TLE
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, q, t[2], x[10001],even=0,odd=0;
//		cin >> n >> q;
//		long long a[100001], ans = 0, bou = 0, sum = 0;
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//
//		for (int i = 0; i < q; i++) {
//			cin >> t[i] >> x[i];
//			for (int j = 0; j < n; j++) {
//				if(t[i]==0 and a[j]%2==0) a[j]=a[j]+x[i];
//				else if(t[i]==1 and a[j]%2==1) a[j]=a[j]+x[i];
//				sum += a[j];
//			}
//			cout << sum << endl; sum = 0;
//		}
//
//	}
//}

