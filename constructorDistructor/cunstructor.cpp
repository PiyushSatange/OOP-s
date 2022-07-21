//If we didn't defin the constructor than there is always default constructor which runs
#include <iostream>
using namespace std;

//default constructor is present here
class hero{
    int level;
    int health;
};

//constructor made by us
class man{
    public:
    int hands;
    int legs;
    man(){
        cout<<"man is called"<<endl;
    }
};

//Parameterised constructor
class boy{
    public:
    int weight;
    int height;  
    boy(int weight){
        this->weight = weight;
        cout<<"The weight of the boy is "<<this->weight<<endl;
    }
    boy(int weight, int height){
        this->weight = weight;
        this->height = height;
        cout<<"The weight of the boy is "<<this->weight<<endl;
        cout<<"The weight of the boy is "<<this->height<<endl;
    }
};

int main(){
    hero h1; //default constructor calls
    man m1; //constructor made by us will be called
    man *m2 = new man; //constructor mad by us will be called
    boy b1(10); 
    //when we make constrocture by our selfe the default constructur dies
    cout<<endl;
    boy b2(30); //when we pass only one value then constructro having 1 paramiter will be called
    boy b3(20, 40); //when we pass two value then constructor having 2 parameter will be called
}