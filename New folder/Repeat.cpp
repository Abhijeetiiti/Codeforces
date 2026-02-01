#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, total_solved = 0;
    cin >> n;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            total_solved++;
        }
    }

    cout << total_solved << endl;
    return 0;
}

