#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100];
    char t[100];

    cin >> s;
    cin >> t;

    bool match = false;

    for (int i = 0; s[i] != '\0'; i++) {
        for (int j = 0; t[j] != '\0'; j++) {
            if (s[i] == t[j]) {
                match = true;
                break;
            }
        }
        if (match) break;
    }

    if (match)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
