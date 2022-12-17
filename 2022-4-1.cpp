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
	while (getline(cin,s,'\n')) {
		vector<int> xx;
		int x, y, a, b;
		string t;
		for (int i=0; i<s.size(); i++) {
			if (s[i]!='-' && s[i]!=',') {
				t+=s[i];
			}
			if ((s[i]=='-' || s[i]==',') || i==s.size()-1) {
				if (t.size()==1) {
					xx.pb(t[0]-'0');
				}
				else {
					xx.pb(stoll(t));
				}
//				cout << xx[xx.size()-1] << endl;
				t="";
			}
		}
		x=xx[0], y=xx[1], a=xx[2], b=xx[3];
//		x=s[0]-'0', y=s[2]-'0', a=s[4]-'0', b=s[6]-'0';
		if ((x<=a && y>=b) || (a<=x && b>=y)) {
			ans++;
//			cout << x << " " << y << " " << a << " " << b << endl;
		}
	}
	cout << ans << endl;
}


