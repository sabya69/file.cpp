// subset 
/*#include <iostream>

using namespace std;

void solve(int nums[], int n, int index, int subset[], int subsetSize) {
    // Base case
    if (index == n) {
        cout << "[ ";
        for (int i = 0; i < subsetSize; i++) {
            cout << subset[i] << " ";
        }
        cout << "]\n";
        return;
    }
    
    // Exclude
    solve(nums, n, index + 1, subset, subsetSize);
    
    // Include 
    subset[subsetSize] = nums[index];
    solve(nums, n, index + 1, subset, subsetSize + 1);
}

void subsets(int nums[], int n) {
    int subset[n]; // Temporary array to store subsets
    solve(nums, n, 0, subset, 0);
}

int main() {
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    subsets(nums, n);
    return 0;
}*/
// subsequence case 
#include <iostream>

using namespace std;

void solve(string str, int i, char output[], int outputSize) {
    // Base case
    if (i >= str.length()) {
        if (outputSize > 0) {
            cout << "[ ";
            for (int j = 0; j < outputSize; j++) {
                cout << output[j];
            }
            cout << " ]\n";
        }
        return;
    }
    
    // Exclude
    solve(str, i + 1, output, outputSize);
    
    // Include
    output[outputSize] = str[i];
    solve(str, i + 1, output, outputSize + 1);
}

void subsequences(string str) {
    char output[str.length()]; // Temporary array to store subsequences
    solve(str, 0, output, 0);
}

int main() {
    string str = "abc";
    subsequences(str);
    return 0;
}

