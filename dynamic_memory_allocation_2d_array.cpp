#include<iostream>
using namespace std;

int main(){
    int n;
    cout << " Enter the number of rows and columns: ";
    cin >> n;
    int **arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }
    // creation done

    // taking input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    // taking the output
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        // used to remove data from heap memory 
        delete [] arr[i];
        cout << endl;
    }
}
