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
		int n;
		cin >> n;
		string s;
		cin >> s;

		for(int i = 0; i <= n / 2; i++){
			if(s[i] == '?' && s[n - 1 -i] == '?'){
				s[i] = '0';
				s[n - 1 - i] = '1';
			}
			else if(s[i] == '?'){
				if(s[n - 1 - i] == '1'){
					s[i] = '0';
				}
				else{
					s[i] = '1';
				}
			}
			else if(s[n - 1 - i] == '?'){
				if(s[i] == '1'){
					s[n - 1 - i] = '0';
				}
				else{
					s[n - 1 - i] = '1';
				}
			}
		}
		

		string a = "POSSIBLE";
		//if any substr is palindrome : IMPOSIBLE

		cout << "Case #" << x << ": " << a << endl;
	}
	return 0;
}