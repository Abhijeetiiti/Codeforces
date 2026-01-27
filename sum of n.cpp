#include <iostream>
#include <string>

using namespace std;


    class name {
        public:
        void setdetails(int r,string n,float m) {
            rollno=r;
            nam=n;
            mark=m;
        }
            void display(){
                cout<<rollno<<" "<<nam<<" "<<mark<<endl;
            }


        private:
        string nam;
        float mark;
        int rollno;
    };
int main() {
    name  s;
    s.setdetails(2,"abhi",56);
    s.display();

}