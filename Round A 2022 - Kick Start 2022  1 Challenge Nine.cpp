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

		string a = "";

		int numb = 0;
		for(int i = 0; i < s.size(); i++){
			numb += s[i] - 48;
			numb = numb % 9;
		}

		// if(9 - numb > 0 && 9 - numb < s[0] - 48){
		// 	a += to_string(9 - numb);
		// 	a.append(s.substr(0, s.size()));
		// }
		// else{
		// 	a += s[0];
		// 	a += to_string(9 - numb);
		// 	a.append(s.substr(1, s.size() - 1));
		// }

		int i = 0;
		while(i < s.size() && ((9 - numb >= s[i] - 48 && numb > 0) || (i == 0 && numb == 0))){
			i++;
		}

		a.append(s.substr(0, i));
		if(numb > 0) a += to_string(9 - numb);
		else a += to_string(numb);
		if(i < s.size()){
			a.append(s.substr(i, s.size() - i));
		}
		

		cout << "Case #" << x << ": " << a << endl;
	}
	return 0;
}