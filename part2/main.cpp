#include <iostream>
int main() {
    int* ptr = new int(42);  // manual allocation
    std::cout << *ptr << std::endl;
    delete ptr;              // manual deallocation
    // std::cout << *ptr;    // dangling pointer if uncommented
}
