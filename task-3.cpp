/*program name : write a program with class to find whether a given number is prime or not*/

#include<iostream>
using namespace std;

class Prime{
    private:
        int num;
    public:
        void isPrime(int n){
            num = n;
            int flag = 0;
            for(int i = 2; i <= num/2; i++){
                if(num % i == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                cout << "Prime" << endl;
            else
                cout << "Not Prime" << endl;
        }

};

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Prime obj;
    obj.isPrime(n);
}