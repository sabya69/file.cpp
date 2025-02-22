#include <iostream>
using namespace std;

void print(int *p) {
    cout << "Value at pointer: " << *p << endl; // Print value stored at the pointer
    cout << "Address stored in pointer: " << p << endl; // Print address stored in pointer
}

void update(int *p) {
    p = p + 1; // Changing local pointer, doesn't affect original pointer in main
    cout << "Address of p inside update function: " << p << endl;
}
// In this case the value isn't updated because firstly the pointer enter into the function and get's changed after that it moves to the main function where the value again go to the previos value.
int getSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int value = 5;
    int *p = &value;
    
    print(p);
    cout << "Before update: " << p << endl;
    update(p);
    cout << "After update: " << p << endl; // Will remain unchanged

    int arr[] = {1, 2, 3, 4, 5};
    cout << "Sum is: " << getSum(arr, 5) << endl;

    return 0;
}


   
 

