#include <iostream>

int main() {
    int limit; 
    int sum = 0; 

    std::cout << "Enter the limit: ";
    std::cin >> limit;


    for (int i = 1; i <= limit; i++) {
        
        if (i % 2 == 0) {
            sum += i; 
        }
    }

    std::cout << "Sum of even numbers up to " << limit << " is " << sum << std::endl;
    return 0;
}

