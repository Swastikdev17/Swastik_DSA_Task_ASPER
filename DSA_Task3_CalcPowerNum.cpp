#include <iostream>
using namespace std;

// Iterative Binary Exponentiation
// Time Complexity: O(log n), Space Complexity: O(1)
long long power(long long x, long long n)
{
    long long result = 1;
    
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = result * x;
        }
        x = x * x;
        n = n / 2;
    }
    
    return result;
}

int main()
{
    long long x, n;
    
    cout << "Enter base (x): ";
    cin >> x;
    
    cout << "Enter exponent (n): ";
    cin >> n;
    
    long long result = power(x, n);
    cout << x << "^" << n << " = " << result << "\n";
    
    return 0;
}