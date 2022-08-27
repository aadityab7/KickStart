#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

void solve(){
		long n;
		cin >> n;

		long arr[n];

		for(long i = 0; i < n; i++){
			cin >> arr[i];
		}

		//it has to be max till now and next day should be smaller then it
		long max = -1;
		long ans = 0;
		
		for(long i = 0; i < n; i++){
			if(arr[i] > max){

				max = arr[i];

				if(i < (n - 1)){
					if(arr[i] > arr[i + 1]){
						ans++;
					}
				}
				else{
					ans++;
				}
			}
		}

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