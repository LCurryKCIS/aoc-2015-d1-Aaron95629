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
		int score=0;
		char a=s[0], b=s[2];
		if (b=='X') {
			b='A';
		}
		else if (b=='Y') {
			b='B';
		}
		else {
			b='C';
		}
		if (b=='A') {
			if (a=='A') {
				score+=3;
			}
			else if (a=='B') {
				score++;
			}
			else {
				score+=2;
			}
		}
		else if (b=='B') {
			score+=3;
			if (a=='A') {
				score++;
			}
			else if (a=='B') {
				score+=2;
			}
			else {
				score+=3;
			}
		}
		else {
			score+=6;
			if (a=='A') {
				score+=2;
			}
			else if (a=='B') {
				score+=3;
			}
			else {
				score++;
			}
		}
//		cout << score << endl;
		ans+=score;
	}
	cout << ans << endl;
}


