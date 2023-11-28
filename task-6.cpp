/*programe name : write a program to represent time that includes the member function to perform the follwing task:
    1. take input for time in hours and minutes.
    2. add two times.
    3. display the time in form hours:minutes.
*/

#include <iostream>
using namespace std;

class Time{
    private:
        int hours;
        int minutes;
        char ch;
    public:
        Time(){
            hours=0;
            minutes=0;
        }
        void getInput(){
            cout<<"Enter hours : minutes"<<endl;
            cin>>hours>>ch>>minutes;
        }
        void addTime(Time t1,Time t2){
            minutes=t1.minutes+t2.minutes;
            hours=minutes/60;
            minutes=minutes%60;
            hours=hours+t1.hours+t2.hours;
        }
        void display(){
            cout<<"Hours : Minutes"<<endl;
            cout<<hours<<":"<<minutes<<endl;
        }
};

int main(){
    Time t1,t2,t3;
    t1.getInput();
    t2.getInput();
    t3.addTime(t1,t2);
    t3.display();
    return 0;
}