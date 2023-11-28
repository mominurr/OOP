// program name : write a program that finds the volume of different shapes (like rectangle, cylinder, cube) using function overloading.

#include <iostream>
using namespace std;

class shape{
    public:
        void volume(double l, double w, double h);
        void volume(double r, double h);
        void volume(double a);
};

void shape :: volume(double l, double w, double h){
    cout<<"Volume of a rectangle: "<<l*w*h<<endl;
}

void shape :: volume(double r, double h){
    cout<<"Volume of a cylinder: "<<3.14*r*r*h<<endl;
}

void shape :: volume(double a){
    cout<<"Volume of a cube: "<<a*a*a<<endl;
}

int main(){
    double l, w, h, r,a;
    cout<<"Enter l, h & w to calculate the volume of a rectangle:"<<endl;
    cin>>l>>w>>h;
    shape s;
    s.volume(l,w,h);
    cout<<"Enter r & h to calculate the volume of a cylinder:"<<endl;
    cin>>r>>h;
    shape s1;
    s1.volume(r,h);
    cout<<"Enter a to calculate the volume of a cube:"<<endl;
    cin>>a;
    shape s2;
    s2.volume(a);
    return 0;
}