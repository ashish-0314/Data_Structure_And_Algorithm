#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: fib(0) = 0, fib(1) = 1
    } 
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    // Display Fibonacci series up to 'n' terms
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " "; // Call the recursive function
    }
    cout << endl;

    return 0;
}
