#include <iostream>
using namespace std;

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;

    int i = 0;  // Pointer to track unique elements
    for (int j = 1; j < n; ++j) {
        if (nums[j] != nums[i]) {
            ++i;
            nums[i] = nums[j];
        }
    }
    return i + 1;  // Number of unique elements
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, n);

    cout << "k = " << k << endl;
    cout << "Modified nums = ";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}