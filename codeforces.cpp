#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        string target ="codeforces";
        int l=target.length();
        for (int j=0;j<l;j++) {
            for (int k=1;k<l-1;k++){
                string p=target.substr(l,l-1);
                if (s==p){

                    cout<<"YES";
                }
                else {
                    cout<<"NO";
                }

            }
        }
    }
}