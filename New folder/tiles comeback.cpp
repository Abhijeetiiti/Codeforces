#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        string s;
        cin >> s;

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            sum += i;
        }

        if (sum % p == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
