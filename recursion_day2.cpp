// walking distance example leetcode 
//#include<iostream>
//using namespace std;
/*void reachhome(int src, int dest){
    cout << "source"<< src << "destintion" << dest << endl;
    // base case
    if(src==dest){
        cout << "Reached home" << endl;
        return;
    }
    // processing ek step aage badhjao
    src++;
    // recursive case
    reachhome(src, dest);
}
int main(){
    int src, dest;
    cout << "Enter the source and destination: ";
    cin >> src >> dest;
    reachhome(src, dest);
    return 0;
}*/
// recusrsion in fibonanci series to find the nth element 
/*int fib(int n){
    //base case 
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    //recursive case
    int ans = fib(n-1) + fib(n-2);
    return ans;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = fib(n);
    cout << ans << endl;
    return 0;
}*/
// count ways to reach nth stairs
#include <iostream>
using namespace std;

// Function to count the number of ways to reach the nth stair
int countWays(int n) {
    // Base cases
    if (n == 0) return 1;  // One way to stay at the ground
    if (n < 0) return 0;   // No way to go negative
    
    // Recursive relation: ways to reach nth stair is the sum of ways to reach (n-1)th and (n-2)th stair
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Number of ways to reach the " << n << "th stair: " << countWays(n) << endl;
    return 0;
}
