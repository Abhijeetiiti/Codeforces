#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        cout<<s<<endl;



}





