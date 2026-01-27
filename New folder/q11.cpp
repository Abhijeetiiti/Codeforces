#include<iostream>
#include<string>
#include<algorithm>
#include <iomanip>
using namespace std;
class bankaccount {
    double  balance;
    string name;
    int accountNumber;
    double deposit;
    double withdraw;
    double cc;
    public:
    bankaccount(string n,int ac,double b,double d,double w):name(n),balance(b),accountNumber(ac),withdraw(w),deposit(d){};
    void display() {
        cout<<name<<" "<<accountNumber<<" "<<balance<<endl;
    }
    void deposite() {
        cc=balance+deposit;
        cout<<"Deposit ="<<cc<<endl;
    }
    void withwal() {
        cout<<"Withdraw ="<<cc-withdraw<<endl;
    }
};
int main() {
    bankaccount acc("Abhijeet",25006377,1500.0,1300.79,400);
    cout<<endl;
   acc.display();
    acc.deposite();
    acc.withwal();

}