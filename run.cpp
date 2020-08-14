#include<bits/stdc++.h>
using namespace std;
#define inf 1000000000000
typedef long long ll;
#define int ll
 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
signed main() 
{
    OJ; 
    FIO;
    
    int t;
    cin >> t;

    while (t --) {
        string s, p;
        cin >> s >> p;

        for (int i = 0; i < p.length(); i++) {
            int index = s.find(p[i]);
            s[index] = '*';
        }

        sort(s.begin(), s.end());
        int f = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '*') {
                if (s[i] > p[0] && f == 0) {
                    cout << p << s[i];
                    f = 1;
                } else {
                    cout << s[i];
                }
            }
        }

        if (f == 0)
        cout << p;

        cout << "\n";
    }


    
}
