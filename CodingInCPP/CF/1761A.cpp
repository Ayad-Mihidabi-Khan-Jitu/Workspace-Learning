#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;
		if (n == 1 and a == 1 and b == 1) cout << "Yes" << endl;
		else if ((n - (a + b))>=2) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}