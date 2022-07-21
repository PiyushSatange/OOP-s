//In this single inharitance there is only one child of the main class
/* class A
    |
   \|/
  class B
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
    string type;
}; 

int main(){
    dog d1;
    d1.speak();
    return 0;
}