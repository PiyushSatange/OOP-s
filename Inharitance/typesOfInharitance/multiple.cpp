//In multiple inharitance child class inharits more than one class
/*
class A      class B
     \       /
     _\|   |/_
      class C
*/

#include <iostream>
using namespace std;

class animal{
    public:
    int height;
    int weight;
    void bark(){
        cout<<"barking"<<endl;
    }
};

class human{
    public:
    string color;
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class hybrid: public animal, public human{

};

int main(){
    hybrid h1;
    h1.bark();
    h1.speak();
    return 0;
}