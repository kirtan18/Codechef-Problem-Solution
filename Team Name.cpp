#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

ll helper(vector<char> a , vector<char> b) {

	set<char> st(a.begin() , a.end());

	ll tm = 0;

	for (auto x : b) {

		if (st.find(x) != st.end()) {
			tm++;
		}
	}

	return tm;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	ll T;
	cin >> T;
	while (T--) {

		ll n ;
		cin >> n;

		map<string , vector<char>> mpp;

		string s;

		for (ll i = 0 ; i < n ; i++) {
			cin >> s;
			if (s.length() > 0) {
				mpp[s.substr(1)].push_back(s[0]);
			}
		}

		ll ans = 0 ;
		for (auto i : mpp) {
			for (auto j : mpp) {
				if (i.first != j.first) {
					ll temp = helper(i.second, j.second);
					ans += (i.second.size() - temp) * (j.second.size() - temp);

				}
			}
		}

		cout << ans << endl;
	}


	return 0;
}
