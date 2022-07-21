//in multilevel inharitance classes inharits in level
/*
class A
    |
   \|/
class B
    |
   \|/
class C
    |
   \|/
class D
*/

#include <iostream>
using namespace std;

class animal{
    public:
    int height;
    int weight;
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog:public animal{
    
}; 

class GermanShephered:public dog{

};

int main(){
    GermanShephered g1;
    g1.speak();

    return 0;
}