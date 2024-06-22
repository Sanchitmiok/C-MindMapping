#include <iostream>
#include <algorithm> // For std::fill
#include <vector>

int main() {
    // Example with a vector
    std::vector<int> vec(10); // Create a vector of size 10

    // Fill the vector with the value 5
    std::fill(vec.begin(), vec.end(), 5);

    // Print the filled vector
    std::cout << "Vector after filling: ";
    for(int i : vec) {
        std::cout << i << " ";
    std::cout << std::endl;

    // Example with an array
    int arr[10]; // Create an array of size 10

    // Fill the array with the value 3
    std::fill(arr, arr + 10, 3);

    // Print the filled array
    std::cout << "Array after filling: ";
    for(int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
