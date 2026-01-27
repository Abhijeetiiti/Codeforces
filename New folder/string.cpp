#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (char c : s) {
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u') {
            cout << "." << c;
        }
    }

    return 0;
}

