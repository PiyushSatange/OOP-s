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

    hero(hero &temp){
    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch, temp.name);
    this->name = ch;
    this->level = temp.level;
    this->heleath = temp.heleath;
    }

};

int main(){
    hero h1;
    h1.heleath = 90;
    h1.level = 'A';
    char name[7] = "piyush"; 
    h1.setName(name);

    //copy constructure made by us
    hero h2(h1);
    
    h1.print();
    h2.print();

    //In deep copy we are making new array for that is why changes are not replicating
    //to use deep copy we have to make our own copy constructore 
    h2.name[0] = 'A';

    h1.print();
    h2.print();

    return 0;
}