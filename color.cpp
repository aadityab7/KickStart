#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		long long n;
		cin >> n;

		long long ans = ((n - 1) / 5);
		ans++;
		
		cout << "Case #" << i << ": " << ans << "\n";
	}
	return 0;
}


/*
1
1 -
1 - 0
1 - - 0
1 - - 0 -
1 - - 0 - 1 
1 - - 0 - 1 -
1 - - 0 - 1 - 0
1 - - 0 - 1 - - 0 
1 - - 0 - 1 - - 0 -
1 - - 0 - 1 - - 0 - 1
1 - - 0 - 1 - - 0 - - 1

1 - 0 - 1 - 0 - 1 - 0
1 - 0 - 1 - 0 - 1 - 0 -
1 - 0 - 1 - 0 - 1 - 0 - 1

1
6
11

1 + (n - 1) d
*/


// (N - 1 / 5) + 1