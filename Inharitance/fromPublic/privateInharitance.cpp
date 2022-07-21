#include <iostream>
using namespace std;

class human{
    public:
        int height;
};

//in private case we can access human properties only within the class not even in child class
class male:private human{
    public:
        int weight;
    int getHeight(){
        return this->height;
    }
    void setHeight(int height){
        this->height = height;
    }
};

int main(){
    male m1;
    // m1.height; //we can't use it like this because we can't access it outside the class
    m1.setHeight(8);
    cout<<"height: "<<m1.getHeight()<<endl;
    return 0;
}