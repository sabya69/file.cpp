#include <iostream>
using namespace std;

int getSum(int *arr, int n) {  // Pass array size as an argument
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Dynamically allocate an array
    int *arr = new int[n];

    // Taking input in the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pass the array and size to the function
    int ans = getSum(arr, n);
    cout << ans << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}
