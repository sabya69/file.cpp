/*#include<iostream>
using namespace std;
#include<string.h>
void sort(int n,char matrix[50][50]);
int main(){
    int n;
    cout << "Enter the no of rows and column :" ;
    cin >> n;
    char matrix[50][50];
    cout << " Enter the element of the matrix " ;
    for(int i=0;i<n;i++){
        cin >> matrix[i];
    }
    cout << "The matrix is " ;
    for(int i =0; i< n;i++){
        cout << matrix[i] << "\n";

    }
    sort(n,matrix);
    cout << " after sorting ";
    for(int i=0; i<=n; i++){
        cout << matrix[i] << "\n";
    }
    return 0;
}
void sort(int n, char matrix[50][50]){
    char temch[50]={0};
    int i,j;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i;j++){
            if(matrix[j][0] > matrix[j+1][0]){
                strcpy(temch,matrix[j]);
                strcpy(matrix[j],matrix[j+1]);
                strcpy(matrix[j+1],temch);
            }
        }
    }
}*/
#include<iostream>
#include<string.h>
using namespace std;

void sort(int n, char matrix[50][50]);

int main() {
    int n;
    cout << "Enter the no of rows and column: ";
    cin >> n;
    
    char matrix[50][50] = {0};  // Initialize the array to avoid garbage values

    cout << "Enter the elements of the matrix: ";
    for(int i = 0; i < n; i++) {
        cin >> matrix[i];
    }

    cout << "The matrix is:\n";
    for(int i = 0; i < n; i++) {
        cout << matrix[i] << "\n";
    }

    sort(n, matrix);

    cout << "After sorting:\n";
    for(int i = 0; i < n; i++) {  // Fix: Changed `<=n` to `<n`
        cout << matrix[i] << "\n";
    }
    
    return 0;
}

void sort(int n, char matrix[50][50]) {
    char temch[50] = {0};  // Fix: Initialize to prevent garbage values

    for(int i = 0; i < n - 1; i++) {  
        for(int j = 0; j < n - i - 1; j++) {  
            if(matrix[j][0] > matrix[j+1][0]) {
                strcpy(temch, matrix[j]);
                strcpy(matrix[j], matrix[j+1]);
                strcpy(matrix[j+1], temch);
            }
        }
    }
}
