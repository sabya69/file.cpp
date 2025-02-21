#include<iostream>
using namespace std;

int main (){
    //shell increasing program after an pointer function
        int num =5;
        int a=num;
        a++;
        cout<<num<<endl;
        int *p = &num;
        cout<<"before"<< num << endl;
        (*p)++;
        cout<<"after"<< num << endl;
        // copying of pointer
        int *q=p;
        cout<<p<<"-"<< q<<endl;
        cout<<*p<<"-"<< *q<<endl;
        // pointer to pointer
        // pointer addition 
        int i = 3;
        int *t = &i;
        //cout <<  (*t)++ << endl;
        *t = *t +1;
         cout << *t << endl;
         cout << " before t " << t << endl;
         t = t + 1;
         cout << " after t " << t << endl;
         //playing with pointer using array 
            int arr[] = {10,20,30,40,50};
            cout << "address of first memory block is " << arr << endl;
            cout << arr[0] << endl;
            cout << "address of first memory block is " << &arr[0] << endl;
            cout << "1st " << *arr << endl;
            cout << "2nd " << *(arr+1) << endl;
            cout << "3rd " << *(arr+2) << endl;
            cout << "4th " << *(arr+3) << endl;
            cout << "5th " << *(arr+4) << endl;
            cout << "6th " << *(arr+5) << endl;
             // Difference between array and pointer
        // size difference between array and pointer
        int temp[10];
        cout << "size of temp " << sizeof(temp) << endl;
        
        int *ptr = &temp[0];
        cout << "size of ptr " << sizeof(ptr) << endl;*/
        // address difference between array and pointer
        int a[20]={1,2,3,4,5,6,7,8,9,10};
        cout << "address of a " << &a[0] << endl;
        cout << "address of a " << a << endl;
        cout << "address of a " << &a << endl;
        int *p1 = &a[0];
        cout << "address of p1 " << p1 << endl;
        cout << "address of p1 " << &p1 << endl;
        cout << "address of p1 " << p1+1 << endl;

     
        return 0;
}
