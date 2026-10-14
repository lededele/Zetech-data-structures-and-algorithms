#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 2;
    int value = 99;

    // Update the element at index 2
    if (pos >= 0 && pos < size) {
        arr[pos] = value;
    }

    cout << "After updating:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}