/*#include<iostream>
using namespace std;
// Implemntation of class
class Student{
    public:
    // properties
    char name[100];
    int health;
    char level;
};
int main(){
    return 0;
}*/
/*#include<iostream>
using namespace std;
// Implemntation of object
class Hero{
    int health;
};
int main(){
    // creation of object
    Hero h1;
    cout << "size of object: " << sizeof(h1) << endl;
    return 0;
}*/
// case of access modifiers
/*#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
};
int main(){
    // creation of object
    Hero sabyasachi;
    sabyasachi.health = 100;
    sabyasachi.level = 'A';
    cout << "Health is: " << sabyasachi.health << endl;// through dot function we can able to access it .
    // But in this case we cannot able to get the value of health and  level of the function as its private for getting the value 
    //we need to make it them into public or we can use getter and setter function
    cout << "Level is: " << sabyasachi.level << endl;
    return 0;
}*/
// next case we will do using private public and getter and setter function
#include <iostream>
using namespace std;

class Hero {
    private:
        int health;

    public:
        char level;

        void print() {
            cout << "Level: " << level << endl;
        }

        int getHealth() {
            return health;
        }

        char getLevel() {
            return level;
        }

        void setHealth(int h) {
            health = h;
        }

        void setLevel(char l) {
            level = l;
        }
};  // <-- Added semicolon

int main() {
    Hero sabyasachi;  // Corrected object declaration

    // Initially, health is uninitialized; better to set it first
    sabyasachi.setHealth(100);
    sabyasachi.setLevel('A');

    cout << "Sabyasachi's health is: " << sabyasachi.getHealth() << endl;
    cout << "Sabyasachi's level is: " << sabyasachi.getLevel() << endl;

    return 0;
}
