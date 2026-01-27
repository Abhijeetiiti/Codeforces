
#include <iostream>
#include<vector>
using namespace std;

long long valueOfArray(vector<int>& a) {
    long long sum = 0;
    int currentMax = 0;

    for (int x : a) {
        currentMax = max(currentMax, x);
        sum += currentMax;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = valueOfArray(a);


        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(a[i], a[j]);
                ans = max(ans, valueOfArray(a));
                swap(a[i], a[j]); // restore
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

