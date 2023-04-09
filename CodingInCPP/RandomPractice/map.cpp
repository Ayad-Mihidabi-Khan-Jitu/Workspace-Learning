//https://cp-algorithms.com/
#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> //Big Integer data type
using namespace boost::multiprecision;
using namespace std;
long long powx[100000000];
long long power(long long b, long long n) {
powx[0] = 1;
for (int i = 1; i <= n; i++) {
	powx[i] = powx[i - 1] * b;
}
return powx[n];
}
bool isPrime(int n){
vector<bool> is_prime(n + 1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
   if (is_prime[i] && (long long)i * i <= n) {
       for (int j = i * i; j <= n; j += i)
           is_prime[j] = false;
   }
}
return (is_prime[n] == true);
}

int main()
{
	int128_t a=1000000000000000000, b=1000000000000000000;
	cout << a * b << endl;
	
	int t;
	cin >> t;
	while (t--) {
		/*map<char, int> alpha;
		int n;
		cin >> n;
		string s;
		cin >> s;
		int count = 1;

		for (char i = 'a'; i <= 'z'; i++) {
			alpha[i] = count++;
		}
		sort(s.begin(), s.end());

		for (char i = 'a'; i <= 'z'; i++) {
			if (s[n - 1] == i) cout << alpha[i] << endl;
		}
		*/

		map<char, char> s;
		s['Y'] = 'e';
		s['e'] = 's';
		s['s'] = 'Y';

		//cout<< s['Y'] << s['e'] << s['s'];

		string ss;
		cin >> ss;

		int ans = 1;
		for (int i = 0; i < ss.size()-1; i++) {
			if (ss[i + 1] == s[ss[i]]);
			else {
				ans = 0;
				break;
			}
		}
		if (ans) cout<< "YES" << endl;
		else cout << "NO" << endl;

	

	}

}
