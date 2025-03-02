#include <iostream>

using namespace std;
// sexy code 
void solve(string digit, char output[], int index, int outputSize, string mapping[]) {
    // Base case
    if (index >= digit.length()) {
        if (outputSize > 0) { // Print only non-empty combinations
            cout << "[ ";
            for (int i = 0; i < outputSize; i++) {
                cout << output[i];
            }
            cout << " ]\n";
        }
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++) {
        output[outputSize] = value[i];
        solve(digit, output, index + 1, outputSize + 1, mapping);
    }
}

void letterCombinations(string digits) {
    if (digits.length() == 0)
        return;

    char output[digits.length()];
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, 0, 0, mapping);
}

int main() {
    string digits = "35";
    letterCombinations(digits);
    return 0;
}
