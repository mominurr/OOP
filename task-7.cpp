//programe name : write a program to find the largest and smallest number between two numbers of different classes

#include <iostream>
using namespace std;

class B;
class A{
    private:
        int a;
    public:
        A(int x){
            a=x;
        }
        friend void largest(A a1, B b1);
        friend void smallest(A a1, B b1);
};

class B{
    private:
        int b;
    public:
        B(int y){
            b=y;
        }
        friend void largest(A a1, B b1);
        friend void smallest(A a1, B b1);
};

void largest(A a1, B b1){
    if(a1.a>b1.b){
        cout<<"largest number is a="<<a1.a<<endl;
    }
    else{
        cout<<"largest number is b="<<b1.b<<endl;
    }
}

void smallest(A a1, B b1){
    if(a1.a<b1.b){
        cout<<"smallest number is a="<<a1.a<<endl;
    }
    else{
        cout<<"smallest number is b="<<b1.b<<endl;
    }
}

int main(){
    int val1,val2;
    cout<<"Enter the value for a:";
    cin>>val1;
    A obj1(val1);
    cout<<"Enter the value for b:";
    cin>>val2;
    B obj2(val2);
    cout<<"Finding the largest and smallest between two number of two different classes:"<<endl;
    largest(obj1,obj2);
    smallest(obj1,obj2);
    return 0;
}