#include <iostream>
using namespace std;

void spiralOrder(int matrix[][10], int row, int col) {
    int count = 0;
    int total = row * col;

    // Index initialization
    int startingRow = 0, startingCol = 0;
    int endingRow = row - 1, endingCol = col - 1;

    while (count < total) {
        // Print starting row
        for (int index = startingCol; count < total && index <= endingCol; index++) {
            cout << matrix[startingRow][index] << " ";
            count++;
        }
        startingRow++;

        // Print ending column
        for (int index = startingRow; count < total && index <= endingRow; index++) {
            cout << matrix[index][endingCol] << " ";
            count++;
        }
        endingCol--;

        // Print ending row
        for (int index = endingCol; count < total && index >= startingCol; index--) {
            cout << matrix[endingRow][index] << " ";
            count++;
        }
        endingRow--;

        // Print starting column
        for (int index = endingRow; count < total && index >= startingRow; index--) {
            cout << matrix[index][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
    cout << endl;
}

int main() {
    int n, m;

    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    int matrix[10][10]; // Assuming max 10x10 for simplicity

    cout << "Enter elements of the 2D array:" << endl;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cin >> matrix[row][col];
        }
    }

    cout << "Spiral order output: ";
    spiralOrder(matrix, n, m);

    return 0;
}
