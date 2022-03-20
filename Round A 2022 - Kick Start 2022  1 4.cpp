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
		long long a, b;
		cin >> a >> b;
		long long ans = 0;

		string s;
		long long sum;
		long long mul;
		for(long long i = a; i <= b; i++){
		    sum = 0;
		    mul = 1;
			s = to_string(i);
			
			if(s[s.size() - 1] - 48 == 1){
			    if(i == 1) ans++;
			}else{
			   for(long long j = s.size() - 1; j >= 0; j--){
    				sum += s[j] - 48;
    				mul *= s[j] - 48;
    				if(s[j] - 48 == 0) break;
    			}
    
    			if(mul % sum == 0){
    				ans++;
    				cout << i << ' ';
    			} 
			}
			
		}
            
        cout << endl;
		cout << "Case #" << x << ": " << ans << endl;
	}
	return 0;
}