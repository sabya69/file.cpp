#include <iostream>
#include <string>
using namespace std;

bool valid(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return true;
    }
    return false;
}

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        char temp = ch - 'A' + 'a';
        return temp;
    }
    return ch;
}

bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length() - 1;

    while (s <= e) {
        if (a[s] != a[e]) {
            return false;
        } else {
            s++;
            e--;
        }
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);  // Allows input with spaces

    // Remove invalid characters and convert to lowercase
    string temp = "";

    for (int j = 0; j < s.length(); j++) {
        if (valid(s[j])) {
            temp.push_back(toLowerCase(s[j]));
        }
    }

    // Check if the processed string is a palindrome
    if (checkPalindrome(temp)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}