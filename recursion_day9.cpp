// Permutation of a string 
#include <iostream>
using namespace std;

void permute(string &S, int start, int end) {
    // Base case
    if (start == end) {
        cout << S << endl;  // Use 'S' instead of 's'
        return;
    }
    else {
        // Generate permutations by swapping characters
        for (int i = start; i <= end; i++) {
            swap(S[start], S[i]);
            permute(S, start + 1, end);
            swap(S[start], S[i]); // Backtrack to restore original order
        }
    }
}

int main() {
    string S = "ABC";  
    permute(S, 0, S.length() - 1);
    return 0;
}
