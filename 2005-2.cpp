#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt", "r", stdin); 
	string s;
	cin >> s;
	int cnt=0, id; 
	for (int i=0; i<s.size(); i++) {
		if (s[i]=='(') {
			cnt++;
		}
		else {
			cnt--;
		}
		if (cnt<0) {
			id=i+1;
			break;
		}
	}
	cout << id << endl;
}


