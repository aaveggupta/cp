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

    vector<int> A {0, 3, 7, 6, 4, 0, 5, 5, 5};
    
    int sum = 0;
    A[A.size() - 1] ++;
    for (int i = A.size() - 1; i >= 1; i--) {
        if (A[i] >= 10) {
            int e = A[i] / 10;
            A[i] = A[i] % 10;
            A[i - 1] += e;
        }
    }
    if (A[0] >= 10) {
        int e = A[0] / 10;
        A[0] = A[0] % 10;
        A.insert(A.begin(), e);
    }
    vector<int> B;
    int f = 0;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] == 0 && f == 0) {
            continue;
        } else {
            B.push_back(A[i]);
            f = 1;
        }
    }

    for (auto i : B) {
        cout << i << " ";
    }

    
}
