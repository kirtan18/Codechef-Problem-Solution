#include <iostream>
#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main() {

	int T;
	cin >> T;

	while (T--) {
		int no;
		cin >> no;

		int w[no];
		int l[no];

		for (int i = 0; i < no; i++) {
			cin >> w[i];
		}
		for (int i = 0; i < no; i++) {
			cin >> l[i];
		}

		if (no == 2) {
			if (w[0] == 1 && w[1] == 2) {
				cout << "0" << endl;
			}

			else {
				if (l[0] == 1) {
					cout << "2" << endl;
				}
				else {
					cout << "1" << endl;
				}

			}
		}
		else if (no == 3) {
			int p, q, r, s, t, u;
			int cnt = 0;

			for (int i = 0; i < no; i++) {
				if (w[i] == 1) {
					p = i;
					s = i;
				}
				else if (w[i] == 2) {
					q = i;
					t = i;
				}
				else if (w[i] == 3) {
					r = i;
					u = i;
				}
			}

			while (r <= q || q <= p || r <= p) {
				while (q <= p) {
					q += l[t];
					cnt++;
				}
				while (r <= q || r <= p) {
					r += l[u];
					cnt++;
				}
			}
			cout << cnt << endl;
		}
		else if (no == 4) {
			int p, q, r, a, s, t, u, b;
			int cnt = 0;

			for (int i = 0; i < no; i++) {
				if (w[i] == 1) {
					p = i;
					s = i;
				}
				else if (w[i] == 2) {
					q = i;
					t = i;
				}
				else if (w[i] == 3) {
					r = i;
					u = i;
				}
				else if (w[i] == 4) {
					a = i;
					b = i;
				}
			}

			while (a <= p || a <= q || a <= r || r <= q || q <= p || r <= p) {
				while (q <= p) {
					q += l[t];
					cnt++;
				}
				while (r <= q || r <= p) {
					r += l[u];
					cnt++;
				}
				while (a <= p || a <= q || a <= r) {
					a += l[b];
					cnt++;
				}

			}
			cout << cnt << endl;
		}


	};

	return 0;
}
