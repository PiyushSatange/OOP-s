// we can use operator as the function name using operator overloading


#include <iostream>
using namespace std;

class A{
    public:
    int a;
    int b;

//here we have overload the + operator
    void operator + (A obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout<<"output after subtraction is "<<val1-val2<<endl;
    }

//here we have overload the () operator
    void operator () (){
        cout<<"bracket overloading done"<<endl;
    }
};

int main(){

    A obj1;
    A obj2;

    obj1.a = 5;
    obj2.a = 2;
    obj1 + obj2;
    obj1();

    return 0;
}