#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b)
{
    return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		long n;
		cin >> n;

		std::map<long, int> mp;

		for(int j = 0; j < n; j++){
			cin >> num;
			mp[j] = num;

		}

		sort(A.begin(), A.end(), cmp);


		sort(arr, arr + n);

		long long max;
		long long limit;
		long curr;

		for(auto itr = mp.begin(); itr != mp.end(); itr++){
			curr = itr->second;
			max = -1;
			limit = curr * 2;

			for(auto itr2 = itr + 1; itr2 != mp.end(); itr2++){
				if(itr2->second > limit){
					break;
				}

				max = itr2->second;
			}

			cout << max << ' ';

		}
		//sort the array 

		// //n ^ 2
		// long long limit;
		// long long max;
		// long curr;

		// cout << "Case #" << i << ": ";

		// for(int j = 0; j < n; j++){
		// 	curr = arr[j];
		// 	max = -1;
		// 	limit = curr * 2;
		// 	for(int k = 0; k < n; k++){
		// 		if(j == k){
		// 			continue;
		// 		}

		// 		if(arr[k] <= limit && arr[k] > max){
		// 			max = arr[k];
		// 		}
		// 	}

		// 	cout << max << ' ';
		// }
		
		


	}
	return 0;
}
