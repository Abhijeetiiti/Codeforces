#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) c1++;
        else if (x == 2) c2++;
        else if (x == 3) c3++;
        else if (x == 4) c4++;
    }

    int ta = c4;

    ta+= c3;
    c1 = max(0, c1 - c3);
    ta += c2 / 2;
    c2 %= 2;


    if (c2 == 1) {
        ta++;
        c1 = max(0, c1 - 2);
    }
    ta+= (c1 + 3) / 4;

    cout << ta << endl;
    return 0;
}
