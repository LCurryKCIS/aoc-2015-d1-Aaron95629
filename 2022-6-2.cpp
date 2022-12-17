#include <bits/stdc++.h>
#define ll long long
#define lll __int128
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define ft first
#define sc second
using namespace std;
const int mod=1e9+7;
const ll INF=1e18+7;

void solve() {

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt", "r", stdin); 
	string s;
	int ans=0;
	cin >> s;
	for (int i=13; i<s.size(); i++) {
		map<char,int> mp;
		bool flag=1;
		for (int j=i-13; j<=i; j++) {
			mp[s[j]]++;
			if (mp[s[j]]>1) {
				flag=0;
			}
		}
		if (flag) {
			cout << i+1 << endl;
			return 0;
		}
	}
}


