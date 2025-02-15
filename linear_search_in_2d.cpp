#include<iostream>
using namespace std;
bool ispresernt(int arr[3][4],int n,int m,int key){
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            if(arr[row][col]==key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][4];
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}   
