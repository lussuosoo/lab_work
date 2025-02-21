#include <iostream>
#include "utils/utils.h"

int main() {
    int a,b;
    std::cin>>a>>b;
    std::cout << "Sum: " << add(a,b) << std::endl;
    std::cout << "Subtract: " << subtract(a,b) << std::endl;
    std::cout << "Hello from main branch!" << std::endl;
    return 0;
}