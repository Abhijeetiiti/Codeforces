#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2,n3;
    cin >> n1>>n2>>n3;
    int av;
    av=(n1+n2+n3)/3;
    int a,b,c;
    if (n1>=av) {
        a=n1-av;
    }
    else {
        a=av-n1;
    }
    if (n2>=av) {
        b=n2-av;
    }
    else {
        b=av-n2;
    }
    if (n3>=av) {
        c=n3-av;
    }
    else {
        c=av-n3;
    }
    cout<<a+b+c;
}
