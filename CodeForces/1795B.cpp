#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define IO cin.tie(0);ios_base::sync_with_stdio(0);

int main () {
    IO;
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k, l, r;
        cin >> n >> k;
        int cl = 0, cr = 0;
        for (int i = 0; i < n; i++) {
            cin >> l >> r;
            if (l == k)
                cl = 1;
            if (r == k)
                cr = 1;
        }
        if (cl && cr) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
