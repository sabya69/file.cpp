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

// Function to calculate sum of all elements in the 2D array
int sumOfArray(int arr[][10], int n, int m) {
    int sum = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            sum += arr[row][col];
        }
    }
    return sum;
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
    
    // Get sum of array
    int sum = sumOfArray(arr, n, m);
    cout << "Sum of all elements in the 2D array: " << sum << endl;

    return 0;
}
