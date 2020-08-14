#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char last, a;
	cin >> last;

	int ans = 1, max = 1;
	while (cin >> a) {
		if (a == last) {
			ans ++;
		} else {
			ans = 1;
		}
		last = a;
		if (ans > max) {
			max = ans;
		}
	}

	cout << max;

}