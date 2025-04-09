/*#include<iostream>
using namespace std;
// function overloading case
int add(int num1,int num2){
    return num1+num2;
}
int add(int num1,int num2,int num3){
    return num1+num2+num3;
}
int main(){
    cout << add(10,20) << endl;
    cout << add(10,20,30) << endl;
    return 0;
};*/
// operator overloading case
#include <iostream>
using namespace std;

class A {
public:
    int a;
    int b;

    int add() {
        return a + b;
    }
    void operator-(A &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output: " << value2 - value1 << endl;
    }
};

int main() {
    A obj1, obj2;
    obj1.a = 10;
    obj2.a = 20;
    obj1 - obj2;

    return 0;
}
    
