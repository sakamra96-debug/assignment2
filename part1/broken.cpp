// broken_cpp.cpp
#include <iostream>
using namespace std;
int calculateSum(int arr[], int size) {
    int total = o;                // <-- error: 'o' undeclared (typo, should be 0)
    for (int i = o; i < size; i++) { // <-- same problem
        total += arr[i];
    }
    return total;
}
int main () {
    int numbers [] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof( numbers [o]); // <-- 'o' again
    int result = calculateSum(numbers, size);
    cout << "Sum in C++" " << result << endl; // <-- missing << between string parts
    return o; // <-- returning undeclared 'o'
}
