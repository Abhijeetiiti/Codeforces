#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        int p = 1;
        int i = 0;

        while (i < n) {
            ans += s[i];
            i += p;
            p++;
        }

        cout << ans << endl;
    }

