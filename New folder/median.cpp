#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mx = max({a, b, c});
        int mn = min({a, b, c});
        if (mx==a&&mn==b) {
            cout<<c;
        }
        else if (mx==b&&mn==a) {
            cout<<c;
        }
        else if (mx==c&&mn==b) {
            cout<<a;
        }
        else if (mx==b&&mn==c) {
            cout<<a;
        }
        else if (mx==c&&mn==a) {
            cout<<b;
        }
        else if (mx==a&&mn==c) {
            cout<<b;
        }
    }
}