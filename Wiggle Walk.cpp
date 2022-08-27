// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	int t;

// 	long n;
// 	long r, c, x, y;
// 	string s;

// 	cin >> t;
// 	for(int test_case = 1; test_case <= t; test_case++){
// 		cout << "Case #" << test_case << ": ";
		
// 		cin >> n;
// 		cin >> r >> c;
// 		cin >> x >> y;
// 		cin >> s;
	
//         x = x - 1;
//         y = y - 1;
        
// 		int arr[r][c] = {};
		
// 		arr[x][y] = 1;

// 		for(long i = 0; i < n; i++){
			
// 			if(s[i] == 'E'){
// 				while((y < (c - 1)) && (arr[x][y])){
// 					y++;
// 				}
// 			}	
// 			else if(s[i] == 'W'){
// 				while((y > 0) && (arr[x][y])){
// 					y--;
// 				}
// 			}	
// 			else if(s[i] == 'N'){
// 				while((x > 0) && (arr[x][y])){
// 					x--;
// 				}
// 			}	
// 			else if(s[i] == 'S'){
// 				while((x < (r - 1)) && (arr[x][y])){
// 					x++;
// 				}
// 			}

// 			arr[x][y] = 1;
// 		}

// 		int ans_X = x + 1;
// 		int ans_Y = y + 1;

// 		cout << ans_X << ' ' << ans_Y << "\n";
// 	}
// 	return 0;
// }

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;

	long n;
	long r, c, x, y;
	string s;

	cin >> t;
	for(int test_case = 1; test_case <= t; test_case++){
		cout << "Case #" << test_case << ": ";
		
		cin >> n;
		cin >> r >> c;
		cin >> x >> y;
		cin >> s;
	
        x = x - 1;
        y = y - 1;
        
		int arr[r][c] = {};
		
		arr[x][y] = 1;
		char ch;

		for(long i = 0; i < n; i++){
			
			ch = s[i];

			switch(ch){
				case 'N':	
					while((arr[x][y]) && (x > 0)){
						x--;
					}
					break;

				case 'S':
					while((arr[x][y]) && (x < (r - 1))){
						x++;
					}
					break;

				case 'E':
					while((arr[x][y]) && (y < (c - 1))){
						y++;
					}
					break;

				case 'W':
					while((arr[x][y]) && (y > 0)){
						y--;
					}
					break;
			}

			

			// if(s[i] == 'E'){
			// 	while((y < (c - 1)) && (arr[x][y])){
			// 		y++;
			// 	}
			// }	
			// else if(s[i] == 'W'){
			// 	while((y > 0) && (arr[x][y])){
			// 		y--;
			// 	}
			// }	
			// else if(s[i] == 'N'){
			// 	while((x > 0) && (arr[x][y])){
			// 		x--;
			// 	}
			// }	
			// else if(s[i] == 'S'){
			// 	while((x < (r - 1)) && (arr[x][y])){
			// 		x++;
			// 	}
			// }

			arr[x][y] = 1;
		}

		int ans_X = x + 1;
		int ans_Y = y + 1;
		
		cout << ans_X << ' ' << ans_Y << "\n";
	}
	return 0;
}