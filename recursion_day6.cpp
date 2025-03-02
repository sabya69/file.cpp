#include<iostream>
using namespace std;

int partition(int arr[],int s , int e){

    int pivot = arr[s];
    int count =0;
    for( int i =s+1; i<=e; i++){
        if(arr[i] <=pivot){
            count++;
        }
    }
    // place pivot at right position 
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);

    // left and right wala part korte lagbo 
    int i = s;
    int j = e;
    while(i<=pivotIndex && j>=pivotIndex){
        if(arr[i] <= pivot){
            i++;
        }
        else if(arr[j] > pivot){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    
    }
    return pivotIndex;
}
    void quicksort(int arr[],int s, int e){
        if(s>=e){
            return;
        }
        int p = partition(arr,s,e);
        quicksort(arr,s,p-1);
        quicksort(arr,p+1,e);
    }
int main(){
    int arr[] = {2,7,8,6,1,5,4};
    // Function call conditon 
    quicksort(arr,0,6);
    //printting the array
    for(int i =0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

