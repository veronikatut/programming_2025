#include <iostream>

int main() {
    int x, i;
    std::cin >> x >> i;
    
    int mask = ~(1 << i);

    int result = x & mask;

    std::cout << result << std::endl;
    return 0;
}
