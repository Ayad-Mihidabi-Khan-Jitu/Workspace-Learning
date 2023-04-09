//#include<bits/stdc++.h>
//using namespace std;
//
//long long power10(int n) {
//	long long pow10[10];
//	pow10[0] = 1;
//	for (int i = 1; i <= n; i++) {
//		pow10[i] = pow10[i - 1] * 10;
//	}
//	return pow10[n];
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//	int len = s.size();
//	//201
//	long long number=0;
//	for (int i = len-1; i >=0 ; i--) {
//		number = number + ((s[i]-'0') * power10(len - i - 1));
//	}
//	long long next = ((s[0] - '0')+1) * power10(len - 1);
//	cout << next - number << endl;
//
//
//}