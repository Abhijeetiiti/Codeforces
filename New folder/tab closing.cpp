#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int a,b,n;
        cin >> a >> b >> n ;
        int s = 0 ;
        int p = 0 ;
        for (int i=n; i>0; i--) {
            if (b < a/i) {
                s++ ;
                break ;
            }
        }
        for (int i=n; i>0; i--){
            if (b > a/i) {
                p++ ;
                break ;
            }

            if (s!=0 && p!=0) {
                cout << 2 << endl ;
            } else {
                cout << 1 << endl ;
            }
            //int l=min(b,a/n);


            //cout << l<< "\n";

        }
    }
    return 0;
}
