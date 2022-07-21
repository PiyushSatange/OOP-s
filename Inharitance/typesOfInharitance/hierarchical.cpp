//in hierarchical inharitance parent have more than one child basically it is tree like structure
/*
     class A
        /\             
       /  \             
class B   class C
*/

#include <iostream>
using namespace std;

class A{
    public:
    void funA(){
        cout<<"function A is running"<<endl;
    }
};
class B: public A{
    public:
    void funB(){
        cout<<"function B is running"<<endl;
    }
};
class C: public A{
    public:
    void funC(){
        cout<<"function C is running"<<endl;
    }
};

int main(){

    A a1;
    B b1;
    C c1;

    a1.funA();

    b1.funA();
    b1.funB();

    c1.funA();
    c1.funC();

    return 0;
}