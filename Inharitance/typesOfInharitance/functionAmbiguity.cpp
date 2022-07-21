//in both the parent classes ther is function with same name then with child object which function will exicute

#include <iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"I am A"<<endl;
    }
};
class B{
    public:
    void func(){
        cout<<"I am B"<<endl;
    }
};
class C:public A, public B{

};

int main(){
    C c1;
    c1.A::func();
    c1.B::func();
    return 0;
}