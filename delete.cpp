#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    // Delete the front element
    if (size > 0) {
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    cout << "After deletion:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}