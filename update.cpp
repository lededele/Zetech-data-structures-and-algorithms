#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    int pos = 2;      // Update index 2
    int newValue = 100;

    arr[pos] = newValue;

    cout << "After update:\n";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}