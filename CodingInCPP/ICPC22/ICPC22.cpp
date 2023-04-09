#include <bits/stdc++.h>
using namespace std;
int main() {

	int t;
	cin >> t;
	for (int i = 0; i < 1; i++) {
		int l = 11, w = 23, cou = 0;
		int arrdis[100001];
		for (int j = 1; j <= 1000; j++) {
			for (int k = 1; k <= 1000; k++) {
				double oti = sqrt((j * j) + (k * k));
				double dis = oti + (w - j) + (l - k);
				arrdis[cou++] = dis;
			}
		}

		sort(arrdis, arrdis + 100000);
		cout << arrdis[0] << endl;

	}
}

