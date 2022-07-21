//Inharitence means inhariting the property from parent
#include <iostream>
using namespace std;

class human{
    public:
        int height;
        int weight;
        int age;

        int getHeight(){
            return this->height;
        }
        int getAge(){
            return this->age;
        }
        int getWeight(){
            return this->weight;
        }
        void setHeight(int height){
            this->height = height;
        }
        void setAge(int age){
            this->age = age;
        }
        void setWeight(int weight){
            this->weight = weight;
        }
};

class male: public human{
    public:
        string color;
        void sleep(){
            cout<<"Male is sleepint"<<endl;
        }
};

int main(){

    male m1;
    m1.setAge(10);
    m1.setHeight(3);
    m1.color = "red";
    cout<<"age :"<<m1.age<<endl;
    cout<<"color :"<<m1.color<<endl;
    cout<<"height :"<<m1.height<<endl;
    //so here by using inheritance in public mode all the properties of human is inherited to the male class and we can use them directly by using the object of male class

}