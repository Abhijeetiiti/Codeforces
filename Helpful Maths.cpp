#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,r;
    cin >> s;

    for (int j = 0; j < s.length(); j += 2) {
         r+=s[j];
    }
    sort(r.begin(),r.end());
    for (int i=0;i<r.length();i++) {
        if (i > 0) cout << "+";
        cout << r[i];

    }
    return 0;
}
