#include<iostream>
#include<string>
#include<vector>
using namespace std;
class person {
    private:
    string name;
    int age;
    public:
    person(string n, int a) {
        this->name = n;
        this->age = a;

    }
    void info() {
        cout<<name<<" "<<age;;
    }
    virtual void display()=0;
    virtual int bill()=0;
     virtual ~person(){};

};
class docter : public person {
     private:
    string specialisation;
    int fee;
    public:
    docter(string n,int a, int f, string s):person(n,a), fee(f),specialisation(s) {};
    int bill() override {
        return fee;
    };
     void display() {
         person::info();
         cout<<" "<<specialisation<<" "<<fee<<endl;

     };

};
class staff : public person {
    int salary;
    string position;
    public:
    staff( string n,int a ,int s,string p):person(n,a),salary(s),position(p){};
    void display() {
        cout<<position<<salary<<endl;

    }
    int bill()override {
        return 0;
    }
};
class patient:public person {
    string diease;
    int days;
    int roomcharge;
    public:
    patient( string n,int a,string d, int da,int r):person(n,a),days(da),diease(d),roomcharge(r){};
    int bill() {
        return roomcharge*days;
    }
    void display() {
        cout<<diease<<days<<bill()<<endl;


    }
};
int main () {
    cout <<"-------hospital staff-------"<<endl;
    docter d1("abhijeet",56,1500,"nuerology");
    docter d2("abhijeet2",25,15000,"nuerology");
    staff d1st("abhijeet",50,25,"staff");
    staff d2st("abhijeet2",53,50,"staff");
    d1.display();
    d2.display();
    d1st.display();
    d2st.display();

    cout <<"-------patient record-------"<<endl;
    patient p1("kedar",34,"flu",3,900);
    patient p2("kedar2",34,"flu",2,900);
    p1.display();
    p1.bill();
    p2.display();
    p2.bill();
};