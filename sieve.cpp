#include <iostream>

using namespace std;

void sieveOfEratosthenes(int n) {
    bool isPrime[n + 1];  // Boolean array
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;  // Initialize all numbers as prime
    }

    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {  // If i is prime, mark its multiples
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Print prime numbers
    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    sieveOfEratosthenes(n);
    return 0;
}
