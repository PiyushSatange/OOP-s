// Class is nothing but the user definded datatype

#include <iostream>
using namespace std;

// This is how we define the class
class Hero{
    //These are the properties of the class
    int health;
    
    public:
    char level;
    char getLevel(){
        return level;
    }
};

int main(){
/*
    //static allocation
    Hero h1;
    h1.level = 'A';
    cout<<"level of h1 is "<<h1.level<<endl;
    

    //dynamic allocation
    Hero *h2 = new Hero;
    (*h2).level = 'B';
    cout<<"level of h2 is "<<(*h2).level<<endl;


    Hero *h3 = new Hero;
    h3->level = 'C';
    cout<<"level of h3 is "<<h3->level<<endl;
*/

    //This is how we create the object of type className

    //static allocation
    /*Hero h1; //Now at this time we aquare the space in the memory
    h1.health = 90;
    h1.level = 'A';
    cout<<"size of h1 : "<<sizeof(h1)<<endl;  //In the case of empty class the memory assign is 1 byte
    cout<<"name of the h1 is "<<h1.health<<endl;
    cout<<"health of the h1 is "<<h1.health<<endl;*/

    return 0;
}