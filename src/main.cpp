#include <iostream>
#include "utils/utils.h"

int main() {
    int a,b;
    std::cin>>a>>b;
    std::cout << "Sum: " << add(a,b) << std::endl;
    std::cout << "Subtract: " << subtract(a,b) << std::endl;
    std::cout << "Multiply:" << multiply(a, b) << std::endl;
    return 0;
}