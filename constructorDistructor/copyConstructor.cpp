//copy constructor is by default made in the class we don't have to make it
// We can create our own copy constructor as well
//When we make our own copy constructor the default constructor well die
#include <iostream>
using namespace std;

class boy{
    int weight;
    int height;
    int age;

    public:
        void setWeight(int weight){
            this->weight = weight;
        }
        void setHeight(int height){
            this->height = height;
        }
        void setAge(int age){
            this->age = age;
        }
        int getHeight(){
            return height;
        }
        int getWeight(){
            return weight;
        }
        int getAge(){
            return age;
        }
        void print(){
            cout<<" Height : "<<height<<" Weight : "<<weight<<" Age : "<<age<<endl;
        }

        boy(){
            cout<<"This is simple constructor"<<endl;
        }

        //creating our own copy constructor
        boy(boy &temp){
            cout<<"My copy constructor called"<<endl;
            this->age = temp.age;
            this->weight = temp.weight;
            this->height = temp.height;
        }
};

int main(){

    boy b1;
    b1.setHeight(20);
    b1.setWeight(30);
    b1.setAge(8);
    cout<<"properties of b1 : "<<endl;
    b1.print();

    //copy constructor
    boy b2(b1); //b2 is initialize and b1 is copied to it
    boy b3;
    b3 = b1; //This will also call the copy constructor
    boy b4 = b1; //This will also call the copy constructor
    cout<<"Properties of b2 : "<<endl;
    b2.print();


}