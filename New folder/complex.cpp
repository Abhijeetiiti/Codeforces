#include<string>
#include<vector>
#include<iostream>
using namespace std;
class complex {
private:
    double imag;
    double real;
public:
    complex(double i,double r) {
        this->imag = i;
        this->real = r;

    }
    complex operator+(const complex &c) {
        return complex(imag+c.imag,real+c.real);
    }
    complex operator-(const complex &c) {
        return complex(imag-c.imag,real-c.real);
    }
    void display() {
        cout<<real;
        if(imag>=0) {
            cout << " + " << imag << "i" << endl;
        }
        else{
            cout << " - " << -imag << "i" << endl;
        }
    };



};
int main() {
    complex c1(2,4);
    complex c2(3,5);
    c1.display();
    c2.display();
    complex sum = c1+ c2;
    sum.display();
}