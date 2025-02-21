#include<iostream>
using namespace std;
int main(){
    // for this case we get an idea that the cout function is working differently for the array and the character array
    // for the array it is giving the address of the first memory block
    // for the character array its printing whole value of the array
    int arr[5] = {1,2,3,4,5};
    cout << "address of arr " << arr << endl;
    char ch[5] = {'a','b','c','d','e'};
    cout << "address of ch " << ch << endl;
    // similarly it's printing the whole value of the array
    char *c= &ch[0];
    cout << "address of c " << c << endl;
      
    return 0;
}