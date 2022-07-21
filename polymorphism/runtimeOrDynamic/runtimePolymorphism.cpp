//We can do that by only using inharitance
//both the functions should have same name
//both the functions should have same arguments

#include <iostream>
using namespace std;

class animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog : public animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){
    animal a1;
    dog d1;

    a1.speak();
    d1.speak();

    return 0;
}