#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[7];
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
    }

    int sum = 0;

    while (true) {
        for (int i = 0; i < 7; i++) {
            sum += a[i];
            if (sum >= n) {
                cout << i + 1;
                return 0;
            }
        }
    }
}
