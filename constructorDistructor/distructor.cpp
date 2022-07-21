//distructor is by default present 
//We can create it by our self also but then default distructor will die

#include <iostream>
using namespace std;

class boy{
    int weight;
    int height;

    public:
    boy(int weight, int height){
        this->weight = weight;
        this->height = height;
    }
    void print(){
        cout<<"[ Weight :"<<this->weight<<" Height :"<<this->height<<" ]"<<endl;
    }
    ~boy(){
        cout<<"distructor called"<<endl;
    }

};

int main(){

    boy b1(30, 4);
    b1.print();
    //in static allocation distrocture called automatically

    boy *b2 = new boy(20, 2);
    b2->print();


    cout<<"End of the code"<<endl;
    delete b2; // fro dynamic allocation we have to call by our self

    return 0;
}