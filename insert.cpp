#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 2;      // Insert at index 2
    int value = 25;

    // Shift elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    size++;

    cout << "After insertion:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}