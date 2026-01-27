#include <iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    if (year % 400 ==0) {
        cout<<"Leap YEAR";
    } else if (year % 100 ==0) {
        cout<<"Not Leap YEAR";
    } else if (year % 4 ==0) {
        cout<<"Leap YEAR";
    } else {
        cout<<"Not Leap YEAR";
    }
    return 0;
}