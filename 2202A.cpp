#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        long long x, y;
        cin >> x >> y;

        bool ok = false;

        if (y >= 0) {
            ok = (x >= 2 * y) && ((x - 2 * y) % 3 == 0);
        } else {
            ok = (x >= -4 * y) && ((x + 4 * y) % 3 == 0);
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}