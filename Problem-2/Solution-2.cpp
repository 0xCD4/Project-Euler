#include <iostream>

void fibonacci(int &previous, int &current, int &next) {
    previous = current;
    current = next;
    next = previous + current;
}

int main() {
    int a = 1;
    int b = 2;
    int nextTerm = a + b; // 3
    int result = 2;
    std::cout << "Even Fibonacci series: " << b << " ";

    while (nextTerm <= 4000000) {  
        fibonacci(a, b, nextTerm);
        if (nextTerm % 2 == 0) {
            result += nextTerm;
            std::cout << nextTerm << " ";
        }
    }
    printf("\n");
    std::cout << "result: " << result << std::endl;
    std::cout << std::endl;

    return 0;
}
