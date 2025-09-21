// cpp_lambda.cpp
#include <iostream>
#include <functional>
std::function<int(int)> makeAdder(int x) {
    return [x](int y) { return x + y; }; // captures copy of x
}
int main() {
    auto add5 = makeAdder(5);
    std::cout << add5(3) << std::endl; // 8
    return 0;
}

