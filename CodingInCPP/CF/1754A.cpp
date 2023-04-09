//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//
//	//QAAQ
//	//QAQAA
//	//QQAA
//	//QAAA
//
//	//QQAAAQQA
//	//QQZZZQQ
//
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, noQ = 0, noA = 0;
//		cin >> n;
//		string s;
//		cin >> s;
//		if (s[n - 1] == 'Q') {
//			cout << "No" << endl;
//			continue;
//		}
//
//		for (int j = 0; j < n; j++) {
//			if (s[j] == 'Q') noQ++;
//			else if(noQ>0) {
//				noQ--;
//			}
//		}
//		if (noQ == 0)cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//}