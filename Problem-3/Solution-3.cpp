#include <iostream>
#include <cmath>
long long largestPrimeFactor(long long n) {
    long long largestFactor = -1;
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }
    if (n > 2) {
        largestFactor = n;
    }
    return largestFactor;
}

int main() {
    long long number = 600851475143;
    long long largestPrime = largestPrimeFactor(number);

    std::cout << "The largest prime factor of " << number << " is " << largestPrime << std::endl;

    return 0;
}
