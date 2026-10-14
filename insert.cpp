#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int value = 60;

    // Insert at the rear of the queue
    arr[size] = value;
    size++;

    cout << "After insertion:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}