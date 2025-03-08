#include <iostream>
using namespace std;

void matmx(int ra, int ca, int a[50][50], int rb, int cb, int b[50][50]);

int main()
{
    int a[50][50], b[50][50], ra, ca, rb, cb, r, c;

    cout << "ENTER FIRST MATRIX DIMENSION (Row X Column): ";
    cin >> ra >> ca;

    cout << "ENTER the elements of the first matrix:" << endl;
    for (r = 0; r < ra; r++)
    {
        for (c = 0; c < ca; c++)
        {
            cout << "Enter element at " << r + 1 << " row and " << c + 1 << " column: ";
            cin >> a[r][c];
        }
    }

    cout << "The first matrix you entered is: " << endl;
    for (r = 0; r < ra; r++)
    {
        for (c = 0; c < ca; c++)
        {
            cout << a[r][c] << " ";
        }
        cout << endl;
    }

    cout << "\n*****************************\n";
    cout << "ENTER SECOND MATRIX DIMENSION (Row X Column): ";
    cin >> rb >> cb;

    cout << "ENTER the elements of the second matrix:" << endl;
    for (r = 0; r < rb; r++)
    {
        for (c = 0; c < cb; c++)
        {
            cout << "Enter element at " << r + 1 << " row and " << c + 1 << " column: ";
            cin >> b[r][c];
        }
    }

    cout << "The second matrix you entered is: " << endl;
    for (r = 0; r < rb; r++)
    {
        for (c = 0; c < cb; c++)
        {
            cout << b[r][c] << " ";
        }
        cout << endl;
    }

    if (ca == rb)
    {
        cout << "Matrix multiplication result is: " << endl;
        matmx(ra, ca, a, rb, cb, b);
    }
    else
    {
        cout << "Matrix multiplication not possible for the given dimensions." << endl;
    }

    return 0;
}

void matmx(int ra, int ca, int a[50][50], int rb, int cb, int b[50][50])
{
    int mx[50][50] = {0};
    for (int r = 0; r < ra; r++)
    {
        for (int c = 0; c < cb; c++)
        {
            for (int k = 0; k < rb; k++)
            {
                mx[r][c] += a[r][k] * b[k][c];
            }
        }
    }

    cout << "The multiplication of the matrices is: " << endl;
    for (int r = 0; r < ra; r++)
    {
        for (int c = 0; c < cb; c++)
        {
            cout << mx[r][c] << " ";
        }
        cout << endl;
    }
}
