//We can access the static member of the class without making the object

#include <iostream>
using namespace std;

class boy{
    public:
    int height;
    int weight;
    static int age;
    static int randomFunction(){//static function can access only static member
        return age + 10;
    }
};

int boy::age = 8;

int main(){

    cout<<boy::age<<endl;

    //we can use it by making object as well but it is not recommended
    boy b1;
    b1.age = 4;
    cout<<b1.age<<endl;
    cout<<boy::randomFunction()<<endl;

}