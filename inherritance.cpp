/*#include <iostream>
using namespace std;
class Human{
    public:
        int name;
        int weight;
        int age;
        public:
            int getAge(){
                return  this->age;
            }
            void setweight(int weight){
                this->weight = weight;
            }
};
class male: public Human{
    public:
    string Color;
    void sleep(){
        cout << "Male sleeping" << endl;
       
    }

};
int main(){
    male object;
    cout << object.getAge() << endl;
    cout << object.weight << endl;
    cout << object.Color << endl;
    object.setweight(12);
    cout << object.weight << endl;
    object.sleep();
    return 0;
}*/
// types of inheritance
// 1. Single inheritance
/*#include <iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout << "speaking" << endl;
    }
};
class Dog: public Animal{

};
int main(){
    Dog d;
    d.speak();
    cout << d.age << endl;
    return 0;
}*/
// multiple inheritance
/*#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    void bark() {
        cout << "Barking " << endl;
    }
};

class Human {
    public:
    string color;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

//Multiple Inheritance
class Hybrid: public Animal, public Human {

};


int main() {

    Hybrid obj1;
    obj1.speak();
    obj1.bark();


    return 0;
}*/
// Hierarchical Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void func1() {
        cout << "Inside function 1" << endl;
    }
};

class B {
public:
    void func2() {
        cout << "Inside function 2" << endl;
    }
};

class C {
public:
    void func3() {
        cout << "Inside function 3" << endl;
    }
};

int main() {
    A object1;
    object1.func1();

    B object2;
    object2.func2();

    C object3;
    object3.func3();

    return 0;
}
