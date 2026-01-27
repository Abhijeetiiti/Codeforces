#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
using namespace  std;
class author {
    string name;
    vector<string> email;
    public:
    author(string n,string g):name(n),email(g) {}
    void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"Email: "<<email[0]<<endl;
    }
    string getName() {return name;}

};
class books {
    int id;
    string title;
    author a;
    string bookname;
    double price;
    public:
    books(string b, string t,double p,int id):id(id),bookname(b),price(p),title(t){}
    void display() {
        cout<<"ID: "<<id<<endl;
        cout<<"Book Name: "<<bookname<<endl;
        cout<<"Price: "<<price<<endl;
        author.display();
    }
    string getBookName() {return bookname;}
};
class libray {
    string name;
    vector <books> books;
    public:
    void display() {
        cout<<"Name: "<<name<<endl;
        for(int i=0;i<books.size();i++) {
                books[i].display();
        }
    }
};
int main() {


}