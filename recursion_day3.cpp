/*#include<iostream>
using namespace std;
 
bool issorted(int arr[], int size){
    // base case
    if(size == 0 || size == 1){
        return true;
    }
    if (arr[0] > arr[1] ){
        return false;
    }
    else{
        bool remainingpart = issorted(arr+1, size-1);
        return remainingpart;
    }
}
int main(){
    int arr1[5] = {2,6,20,10,12};
    int arr2[5] = {2,6,25,12,20};
    int size =5;
    bool ans = issorted(arr2, size);
      if(ans){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
}*/
// linear share using recurs
/*#include<iostream>
using namespace std;

void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}

bool linearSearch(int arr[], int size, int k ) {
    print(arr,size);
    //base case
    if(size == 0) 
        return false;

    if(arr[0] == k) {
        return true;
    }
    else {
        bool remainingPart = linearSearch(arr+1, size-1, k );
        return remainingPart;
    }
}

int main() {

    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 6;
    bool ans = linearSearch(arr, size, key);

    if(ans ){
        cout << "Present " << endl;
    }
    else{
        cout << "absent " << endl;
    }

    return 0;
}*/
// binary search using recursion
#include <iostream>
using namespace std;
void print(int arr[], int s,int e){
    for (int i = s; i <= e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarysearch(int arr[], int s, int e, int k) {
    print(arr,s,e);
    // base case 
    // element not found
    if (s > e) {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == k) {
        return true;
    }
    if (arr[mid] > k) {
        return binarysearch(arr, s, mid - 1, k);
    } else {
        return binarysearch(arr, mid + 1, e, k);
    }
}

int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int key = 50;
    cout << "Element found: " << binarysearch(arr, 0, size - 1, key) << endl;
    return 0;
}