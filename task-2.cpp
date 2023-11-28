/* program name : Create a class called COMPLEX that has two private data called real and imaginary.
Include constructor function to input real and imaginary values, show() to display complex number.
write a program to add two complex numbers.*/

#include <iostream>
using namespace std;

class COMPLEX{
    private:
        int real;
        int imaginary;
    public:
        COMPLEX(){
            real = 0;
            imaginary = 0;
        }
        COMPLEX(int r, int i){
            real = r;
            imaginary = i;
        }
        void show(){
            cout << real << " + " << imaginary << "i" << endl;
            
        }
        void add(COMPLEX c1, COMPLEX c2){
            real = c1.real + c2.real;
            imaginary = c1.imaginary + c2.imaginary;
        }

};

int main(){
    int r,i;
    char ch;
    cout<<"Enter a complex number:"<<endl;
    cin>>r>>ch>>i>>ch;
    COMPLEX ob1(r,i);
    cout<<"Enter a complex number:"<<endl;
    cin>>r>>ch>>i>>ch;
    COMPLEX ob2(r,i);
    COMPLEX ob3;
    ob3.add(ob1,ob2);
    ob3.show();
    return 0;
}

