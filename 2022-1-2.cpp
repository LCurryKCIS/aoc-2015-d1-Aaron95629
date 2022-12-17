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
	ll cur=0;
	vector<int> ans;
	while (getline(cin,s,'\n')) {
		bool flag=0;
		if (s!="") {
			ll val=stoll(s);
			cur+=val;
		}
		else {
			ans.pb(cur);
			cur=0;
		}
	}
	sort(all(ans));
	reverse(all(ans));
	cout << ans[0]+ans[1]+ans[2] << endl;
}



