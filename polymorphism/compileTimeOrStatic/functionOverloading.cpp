//In function overloading we can use the more than one function with same name
//To do so we have to make the number of arguments different or make the argument type differnet
//we can not overload the function by just making return type different

#include <iostream>
using namespace std;

class A{
    public:
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
    void sayHello(){
        cout<<"Hello"<<endl;
    }
};

int main(){

    A a1;
    a1.sayHello();
    a1.sayHello("piyush");
    return 0;
}