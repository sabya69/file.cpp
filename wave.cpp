#include <iostream>
using namespace std;

void wavePrint(int arr[][10], int nRows, int mCols) {
    for (int col = 0; col < mCols; col++) {
        if (col % 2 == 1) {
            // Odd index column -> Bottom to top3

            for (int row = nRows - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        } else {
            // Even index column -> Top to bottom
            for (int row = 0; row < nRows; row++) {
                cout << arr[row][col] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    
    int arr[10][10]; // Assuming max 10x10 for simplicity

    cout << "Enter elements of the 2D array:" << endl;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cin >> arr[row][col];
        }
    }

    cout << "Wave print output: ";
    wavePrint(arr, n, m);

    return 0;
}
