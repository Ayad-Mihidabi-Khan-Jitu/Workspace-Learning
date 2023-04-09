#include <bits/stdc++.h>
using namespace std;
int main() {
	int roll = 18 ;


	if(roll == 18)
	 printf("n tomo pod \n");

	int n = 100;
	for (int i = 1; i <= n; i++) {

		int ntomopod = (1 + pow(-1, i));
		printf("%d tomo pod = %d \n", i, ntomopod);
	}

	

 }
 