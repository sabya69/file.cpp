#include <iostream>
#include <cstring> 
using namespace std;
bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        if (a[s] != a[e]) { 
            return false; 
        }
        s++;
        e--;
    }
    return true; 
}


void reverseArray(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while (s < e) {
        swap(name[s++], name[e--]);
    }
}


int getLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];

    
    cout << "Enter your name: ";
    cin >> name;

    
    cout << "Your name is: " << name << endl;

    
    int len = getLength(name);
    cout << "Length: " << len << endl;

    
    if (checkPalindrome(name, len)) {
        cout << "Palindrome: Yes" << endl;
    } else {
        cout << "Palindrome: No" << endl;
    }

    
    reverseArray(name, len);
    cout << "Your name in reverse is: " << name << endl;

    return 0;
}