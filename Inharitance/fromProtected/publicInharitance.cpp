#include <iostream>
using namespace std;

class human{
    protected:
        int height;
};

//in this case the hight will be protected in male class
class male:public human{
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
    // m1.height; //we can't use it like this because we can't access it outside the main class and child class
    m1.setHeight(8);
    cout<<"height: "<<m1.getHeight()<<endl;
    return 0;
}