#include <iostream>
#include <string.h>
using namespace std;

class hero{
    public:
    char level;
    char *name;
    int heleath;

    hero(){
        name = new char[100];
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    void print(){
        cout<<"[Name:"<<this->name<<", level:"<<this->level<<", heleath:"<<this->heleath<<"]"<<endl;
    }

};

int main(){
    hero h1;
    h1.heleath = 90;
    h1.level = 'A';
    char name[7] = "piyush"; 
    h1.setName(name);

    //default copy constructor
    hero h2(h1);
    
    h1.print();
    h2.print();

    //shallow copy is happining here because name is a pointer variable so when we change the value in name it is changing for both the objects
    //name --> address --> piyush
    //so when we are copying the name the address is storing in the name;
    h2.name[0] = 'A';

    h1.print();
    h2.print();

    return 0;
}