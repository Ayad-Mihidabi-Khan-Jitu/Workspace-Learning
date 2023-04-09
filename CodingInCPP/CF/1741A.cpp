//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	int t;
//	cin >> t;
//
//	//XXXS < XS
//	//XXXL > XL
//	//XL > M
//	//XXL = XXL
//	//XXXXXS < M
//	//XL > XXXS
//
//	//S<M
//	//M<L
//
//	while (t--) {
//		string s1, s2;
//		cin >> s1>> s2;
//		int sts1 = 0, sts2 = 0;
//		int lens1 = s1.size();
//		int lens2 = s2.size();
//
//			if (s1[lens1 - 1] == 'S')
//			{
//				sts1 = 1 + (lens1 - 1)*(-1);
//			}
//			else if (s1[lens1 - 1] == 'M')
//			{
//				sts1 = 2 + (lens1 - 1) * (2);
//			}
//			else //'L'
//			{
//				sts1 = 3 + (lens1 - 1) * (3);
//			}
//
//
//			if (s2[lens2 - 1] == 'S')
//			{
//				sts2 = 1 + (lens2 - 1) * (-1);
//			}
//			else if (s2[lens2 - 1] == 'M')
//			{
//				sts2 = 2 + (lens2 - 1) * (2);
//			}
//			else //'L'
//			{
//				sts2 = 3 + (lens2 - 1) * (3);
//			}
//
//			if (sts1 > sts2) cout << ">" << endl;
//			else if (sts1 == sts2) cout << "=" << endl;
//			else cout << "<" << endl;
//
//
//	}
//}