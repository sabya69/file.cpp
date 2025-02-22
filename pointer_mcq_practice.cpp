#include<iostream>
using namespace std;
int main(){
    // 1)First mcq
    /*int first =8;
    int second =18;
    int *ptr = &second;
    *ptr =9;
    cout<<first<<" "<<second<<endl;*/
    // 2)Second mcq
    /*int first =6;
    int *p =&first;
    int *q =p;
    (*q)++;
    cout << first << endl;*/
    //3) Third mcq
    /*int first =8;
    int *p =&first;
    cout << (*p)++ << endl;
    cout << first << endl;*/
    //4) Fourth mcq

   /* int *p=0;
    int first =110;
    p =&first;
    cout << *p << endl;*/
    //5) Fifth mcq
    /*int first =9;
    int second= 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout << first << " " << second << " " << *third << endl;*/
    //6) Sixth mcq
    /*float f=12.5;
    float p=21.5;
    float *ptr=&f;
    (*ptr)++;
    *ptr = p;
    cout<<f<<" "<<p<<" "<<*ptr<<endl;*/
    //7) Seventh mcq
    /*int arr[5]={1,2,3,4,5};
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;*/
    //8) Eighth mcq
    /*int arr[]={1,2,3,4,5};
    cout << *(arr) << " "<< *(arr+1)<< endl;*/
    //9) Ninth mcq
   /* int arr[]={11,12,13,14,15};
    cout << *(arr)<< " " << *(arr+1) << " " << *(arr+2) << " " << *(arr+3) << " " << *(arr+4) << endl;*/

    //10) Tenth mcq
    // error in this code because arr++ is not possible
    int arr[]={11,12,13,14,15};
    int *ptr=arr++;
    cout << *ptr << " " << *arr << endl;
    return 0;
}