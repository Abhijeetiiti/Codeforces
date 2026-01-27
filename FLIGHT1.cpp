#include <iostream>
#include<string>
#include<conio.h>
using namespace std;
class passenger {
private:
    string firstName;
    string passportnumber;
    string email;
    string contactnumber;
public:
    passenger(string f,string p,string e,string c):firstName(f),passportnumber(p),email(e),contactnumber(c) {

    }
    string getFirstName() {return firstName;};
    string getPassword() {return passportnumber;};
    string getEmail() {return email;};
    string getContactNumber() {return contactnumber;};

    void display() const {
        cout<<"First Name: "<<firstName<<endl;
        cout<<"Password: "<<passportnumber<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Contact Number: "<<contactnumber<<endl;
    }

};
class flight {
    protected:
    string flightNumber;
    string departurecity;
    string arrivalcity;
    string departuretime;
    string flightStatus;
    string arrivalTime;
    int seatNumber;
    int availableSeats;

    public:
    flight(string fnum,string dc, string ac,string dt,string fs,int snum,string at,int as): arrivalcity(ac), flightNumber(fnum),departurecity(dc),flightStatus(fs),departuretime(dt),arrivalTime(at),availableSeats(as),seatNumber(snum){}
    virtual double getbaseprice()=0;
    virtual string getflighttype()=0;
    bool bookseat () {
        if(availableSeats>0) {
            availableSeats--;
            return true;
        }
        return false;
    }
    void display ()const {
        cout << flightNumber << ": " << departurecity << " -> " << arrivalcity
         << " (" << departuretime << " - " << arrivalTime << ")" << endl;
        cout << "Available seats: " << availableSeats << "/" << seatNumber << endl;
    }
};
