#include <iostream>
#include <string> // Include the <string> header for using the string type

// Function to determine if a number is even or odd and return a string
std::string is_Even_odd(int n) {
    if (n % 2 == 0) {
        return "Even";
    }
    return "Odd";
}

int main() {
    int n;
    std::cin >> n;
    std::cout << is_Even_odd(n) << std::endl;

    return 0;
}
