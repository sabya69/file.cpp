#include <iostream>
using namespace std;

// Function to take input for the 2D array
void inputArray(int arr[][10], int n, int m) {
    cout << "Enter elements of the 2D array:" << endl;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cin >> arr[row][col];
        }
    }
}

// Function to compute and print the row-wise sum
void rowWiseSum(int arr[][10], int n, int m) {
    cout << "Row-wise sum:" << endl;
    for (int row = 0; row < n; row++) {
        int sum = 0;
        for (int col = 0; col < m; col++) {
            sum += arr[row][col];
        }
        cout << "Sum of row " << row + 1 << ": " << sum << endl;
    }
}

// Function to print the 2D array
void printArray(int arr[][10], int n, int m) {
    cout << "The 2D array is:" << endl;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    
    // Taking input for array dimensions
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    
    int arr[10][10]; // Maximum size set to 10x10, can be changed

    // Function calls
    inputArray(arr, n, m);
    printArray(arr, n, m);
    
    // Compute row-wise sum
    rowWiseSum(arr, n, m);

    return 0;
}
