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
     
        return 0;
}