//encapsulation is nothing but making all the classes private so that the properites become safe like medicine capsule

#include <iostream>
using namespace std;

class boy{
    private:
        int age;
        int height;

    public:
        void setAge(int age){
            this->age = age;
        }
        void setHeight(int height){
            this->height = height;
        }
        int getAge(){
            return age;
        }
        int getHeight(){
            return height;
        }
};
//In the above class we have achive the encapsulation

int main(){

    boy b1;
    cout<<"sab sahi hai"<<endl;
    return 0;
}