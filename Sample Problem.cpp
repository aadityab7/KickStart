#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

void solve(){
		int n, m;
		cin >> n >> m;

		long total = 0;

		int num;
		for(int i = 0; i < n; i++){
			cin >> num;
			total += num;
		}

		long ans = total % m;

		cout << ans << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int test_case = 1; test_case <= t; test_case++){
		cout << "Case #" << test_case << ": ";
		solve();
	}
	return 0;
}