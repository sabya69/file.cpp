/*#include<iostream>
using namespace std;
// it is the case of reccursion using swap function to reverse the string

void reverse(string &str, int i, int j){  // Pass by reference
    // Base case
    if(i >= j){
        return;
    }
    swap(str[i], str[j]);
    
    // Recursive call
    reverse(str, i + 1, j - 1);
}

int main(){
    string name = "Sabyasachi";
    reverse(name, 0, name.length() - 1);
    cout << name << endl;  // Now prints the reversed string
    return 0;
}*/
// It is the case of pallindrome using recursion
// previously we use loop for checking pallindrome but this time we will work with recursion
/*#include<iostream>
using namespace std;
bool checkPalindrome(string str,int i, int j){
    // Base case
    if(i >= j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    // Recursive call
    return checkPalindrome(str, i + 1, j - 1);
}
int main(){
    string name = "madam";
    cout << name << endl;
       if(checkPalindrome(name, 0, name.length() - 1)){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not Palindrome" << endl;
    }
    return 0;
}*/
//  it is the case of power of a number using recursion
/*#include<iostream>
using namespace std;
 int power(int a, int b){
    // Base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;

    }
    // Recursive call
    int ans =power(a,b/2);
    // if b is even
    if(b%2==0){
        return ans*ans;
    }
    // if b is odd
    else{
        return a*ans*ans;
    }
 }
 int main(){
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
 }*/
 // Bubble sort is a simple algorithm that organizes a list of numbers in order by repeatedly comparing and swapping adjacent elements
 #include<iostream>
using namespace std;

void bubblesort(int *arr, int n) {
    // Base case 
    if(n == 0 || n == 1) {
        return;
    }

    // Solve one pass (largest element moves to end)
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call for the remaining array
    bubblesort(arr, n - 1);
}   

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    
    bubblesort(arr, n);
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
