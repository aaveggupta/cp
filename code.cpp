#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int num;
			cin >> num;

			if (num % 2 == 0) {
				continue;
			}
			else {
				for (int k = i - 1; k <= i + 1; k++) {
					for (int l = j - 1; l <= j + 1; l++) {
						if (k >= 0 && k < 3 && l >= 0 && l < 3) {
							a[k][l] = (a[k][l] == 1) ? 0 : 1;
						}
					}
				}
			}
		}

	}


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			cout << a[i][j];
		}
		cout << '\n';
	}



}