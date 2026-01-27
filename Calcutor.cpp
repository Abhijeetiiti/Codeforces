#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout<<"*************Calculator***************"<<endl;
    char op;
    double num1,num2,result;
    cout<<"+,-,*./"<<endl;
    cin>>op;
    cout<<"Enter the First Number" <<endl;
    cin>>num1;

    cout<<"Enter the Second Number"<<endl;
    cin>>num2;

    switch (op){
        case'+':
            result=num1+num2;
            cout<<"result\n"<<result;
            break;
        case'-':
            result=num1-num2;
            cout<<"result\n"<<result;
            break;
        case'*':
            result=num1*num2;
            cout<<"result\n"<<result;
            break;
        case'/':
            result=num1/num2;
            cout<<"result\n"<<result;
            break;

    }
}
