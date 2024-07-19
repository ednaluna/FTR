#include <iostream>

// Auxiliary function to facilitate tail recursion
int factorial_helper(int n, int acc) {
    if (n == 0) {
        return acc;
    }
    return factorial_helper(n - 1, n * acc);
}

// Tail-recursive factorial function
int factorial(int n) {
    return factorial_helper(n, 1);
}

int main() {

    std::cout << "What number do you want to factorial?" << std::endl;
  int i = 0;
    std::cin >> i;
    std::cout << factorial(i) << std::endl; 
    return 0;
}
