#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int k;
    cin>>k;
    int s;
    int c=0;
    for (int i=0;i<t;i++) {
        cin>>s;
        if (s>k) {
           c++;
        }

    }
    cout<<c<<endl;
}
