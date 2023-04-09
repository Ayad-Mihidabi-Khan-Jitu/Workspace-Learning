//Working Solution
//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, k; 
//		cin >> n >> k;
//		long long a[1000], ans = 0;
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		for (int i = 0; i < k; i++) {
//			long long mx = 0;
//			for (int j = i; j < n; j += k) {
//				mx = max(mx, a[j]);
//			}
//			ans += mx;
//		}
//		cout << ans << endl;
//	}
//}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		long long n, k, a[1000], sum = 0, bou = 0, ans=-1, ans2=-1;
		cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}

		for (int i = 1; i <= (n - k) + 1; i++) {
			for (int j = i; j < i + k; j++) {
				//cout << a[j] << " ";
				bou = bou + a[j];
			}
			if (ans2 < bou) ans2 = bou;
			bou = 0;
			//cout << a[i] << " ";
		}

		//cout << "ans2: " << ans2 << endl;

		//2 7 3 4    4 2
		bool berho = false;
		for (int i = 1; i <= n; i++) {
			for (int j = i+1; j <= n; j++) {
				if (i%k==j%k) {
					//cout << i << j << endl;
					swap(a[i], a[j]);
					bou++;
					if (bou > k) {
						berho = true;
						break;
					}
					
				}
				if (berho) break;
				// i%k==j
				//1 2 3 4
				//2 7 3 4      4 2

			}
		}

		//for (int i = 1; i <= n; i++) {
		//	cout << a[i] << " ";
		//}cout << endl;
	
		//2 7 3 4
		bou = 0;
		for (int i = 1; i <= (n-k)+1; i++) {
			for (int j = i; j < i + k; j++) {
				//cout << a[j] << " ";
				bou = bou + a[j];
			}
			if (ans < bou) ans = bou;
			bou = 0;
			//cout << a[i] << " ";
		}
		//cout << "ans: " << ans << endl;
		cout << max(ans,ans2) << endl;

	}
}
*/

//#include<bits/stdc++.h>
//using namespace std;
//
//long long *swaparr(long n, long k, long long arr[]) {
//	int bou = 0;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if ((i+1) % k == (j+1) % k) {
//				//cout << i << j << endl;
//				bou++;
//				if (bou > k) return arr;
//				swap(arr[i], arr[j]);
//				
//			}
//			// i%k==j
//			//1 2 3 4 
//			//2 7 3 4      4 2
//
//		}
//	}
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		static long long n, k, a[1000], sum=0, bou=0;
//		cin >> n >> k;
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		long long *aa= swaparr(n, k, a);
//		/*
//		for (int i = 1; i <= n; i++) {
//			for (int j = i+1; j <= n; j++) {
//				if (i%k==j%k) { 
//					//cout << i << j << endl;
//					swap(a[i], a[j]);
//					bou++;
//					if (bou > k) break;
//				}
//				// i%k==j
//				//1 2 3 4 
//				//2 7 3 4      4 2
//				
//			}
//		}
//		*/
//
//		for (int i = 0; i < n; i++) {
//			cout << aa[i] << " ";
//		}cout << endl;
//
//
//	}
//}
