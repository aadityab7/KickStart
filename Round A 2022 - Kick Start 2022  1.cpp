#include<iostream>
#include <bits/stdc++.h>
// #include <vector>
// #define LONG_MAX 9223372036854775807;
// #define INT_MAX 147483647;
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int x = 1; x <= t; x++){
		string s;
		cin >> s;

		string p;
		cin >> p;

		int i = 0;
		int j = 0;
		int ans = 0;
		string a;
		while(i < s.size() && j < p.size()){
			while(i < s.size() && j < p.size() && s[i] == p[j]){
				i++;
				j++;
			}
			while(j < p.size() && s[i] != p[j]){
				ans++;
				j++;
			}
		}

		if(i < s.size()){
			a = "IMPOSSIBLE";
		}
		else{
			a = to_string(ans);
		}


		cout << "Case #" << x << ": " << a << endl;
	}
	return 0;
}