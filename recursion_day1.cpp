//#include<iostream>
//using namespace std;
/*// First example of recursion
 int factorial(int n){
     
    // base case
    if(n==0){
        return 1;
    }
    // recursive case
    return n * factorial(n-1);

 }
 int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
    return 0;
 }*/
 // tail recursion 
/* fun(){
   Base case
   processory
   reccusive relation
   when recussive relation comes above processor is know as tail recursion
 }*/
   // head recursion
/* fun(){
   Base case
   reccusive relation
   processory
   when recussive relation comes below processor is know as head recursion
 }*/
   //Example of head recursion
   /*int power(int n){
      //base case
      if(n==0){
         return 1;
      }
      //recursive case
      int smaller_problem = power(n-1);
      int bigger_problem = n * smaller_problem;
      return bigger_problem;
   }
   int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;
      int ans = power(n);
      cout << ans << endl;
      return 0;
   }*/
// second example of recursion
#include<iostream>
using namespace std; 
void print(int n){
    // base case
    if(n==0){
        return;
    }
    // recursive case
    cout << n << " ";
    print(n-1);
    cout << n << endl;
}
int main(){
   int n;
   cout << "Enter the number: ";
   cin >> n;
   print(n);
   return 0;
}