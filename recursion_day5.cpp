// merge sort is the process of arranging the array in an ascending order
#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // merge the two arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex] = first[index1];
            index1++;
        } else {
            arr[mainArrayIndex] = second[index2];
            index2++;
        }
        mainArrayIndex++;
    }

    // copy remaining elements of first array
    while (index1 < len1) {
        arr[mainArrayIndex] = first[index1];
        index1++;
        mainArrayIndex++;
    }

    // copy remaining elements of second array
    while (index2 < len2) {
        arr[mainArrayIndex] = second[index2];
        index2++;
        mainArrayIndex++;
    }

    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }
    int mid = s + (e - s) / 2;
    // left part
    mergesort(arr, s, mid);
    // right part
    mergesort(arr, mid + 1, e);
    // merge the two parts
    merge(arr, s, e);
}

int main() {
    int arr[5] = {36, 2, 70, 8, 1};
    int n = 5;
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}