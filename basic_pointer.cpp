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
     
        return 0;
}
