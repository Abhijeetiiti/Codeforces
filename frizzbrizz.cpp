#include <iostream>
using namespace std;
int main() {
    int N,sum;
    sum=0;
    cin>>N;
    if (cin.fail()) {
        cout << -1 << "/n";
    } else if (N >0) {
        for (int i = 1; i <= N; i++) {
            sum += i;
        }
        cout << sum << "/n";
    } else {
        cout << -1 << "/n";
    }
    return 0;
}
