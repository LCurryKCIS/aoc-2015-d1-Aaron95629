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
	int ans=0, cur=0;
	while (cin >> s) {
		bool flag=0;
		for (char c: s) {
			flag|=c>='0'&&c<='9';
		}
		if (flag) {
			int val=stoll(s);
			cur+=val;
			ans=max(ans,cur);
		}
		else {
			cur=0;
		}
	}
	cout << ans << endl;
}


