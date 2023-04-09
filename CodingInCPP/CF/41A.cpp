#include<bits/stdc++.h>
#include <cstdint>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define nl cout<<endl;

void printPascal(ull n)
{
   for (ull line = 1; line <= n; line++)
   {
       // used to represent C(line, i)
       ull C = 1;
       for (ull i = 1; i <= line; i++)
       {
           // The first value in a line
           // is always 1
           cout<<C<<" ";
           C = C * (line - i) / i;
       }
       printf("\n");
   }
}

struct uint256_t
{
   uint64_t bits[8];
};
uint256_t x;

//ll powx[10000000];
unsigned long long factorial(unsigned long long);

unsigned long long nCr(ll n, ll r) {
   ull result;
   result = (factorial(n)) / (factorial(r) * factorial(n - r));
   return result;
}

unsigned long long factorial(unsigned long long n) {
   ull result = 1;
   for (ull i = 1; i <= n; i++) {
       result = result * i;
       //5! = 5 4 3 2 1
   }
   return result;
}

bool isPrime(int n) {
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

//ll power(ll b, ll n) {
//    powx[0] = 1;
//    for (int i = 1; i <= n; i++) {
//        powx[i] = powx[i - 1] * b;
//    }
//    return powx[n];
//}

int findodd(int arr[], int n)
{
   int res = 0, i;
   for (i = 0; i < n; i++)
       res ^= arr[i];
   return res;
}

void substring(string s, int i, string cur)
{
   if (i == s.size())
   {
       cout << cur << endl;
       return;
   }
   substring(s, i + 1, cur + s[i]);
   substring(s, i + 1, cur);
}
ll ch2digit(char s)
{
   char charvalue = s;
   ll number = (int(charvalue) + 0);
   return number - 97;
}
ll Sqrt(ll x)
{
   ll l = 1, r = 1e9, ans = 0;
   while (l <= r)
   {
       ll mid = (l + r) >> 1;
       if (mid * mid <= x)
       {
           ans = mid;
           l = mid + 1;
       }
       else
       {
           r = mid - 1;
       }
   }
   return ans;
}
void permutaion(string s, int l, int r)
{
   if (l == r)
   {
       cout << s << endl;
       return;
   }
   for (int i = l; i <= r; i++)
   {
       swap(s[l], s[i]);
       permutaion(s, l + 1, r);
       swap(s[l], s[i]);
   }
}
bool pallindrome(string s, int l, int r)
{
   /// cout<<"main string : "<<s<<endl;
   if (l >= r)
       return true;
   if (s[l] != s[r])
       return false;
   return pallindrome(s, l + 1, r - 1);
}
char int2char(int N)
{
   return char(N);
}

void solve(int i) {
   string s1,s2;
   cin >> s1>> s2;
   for (int i = 0; i < s2.size(); i++) {
       if (s1[i] != s2[s2.size() - i - 1]) {
           cout << "NO" << endl;
           return;
       }
   }
   cout << "YES" << endl;

}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(0);
   int t=1;
   //cin >> t;
   for (int i = 0; i < t; i++) solve(i);
   
}