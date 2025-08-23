#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n (range 1 to n): ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n - 1 << " elements in sorted order: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int missing = n;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1) {
            missing = i + 1;
            break;
        }
    }

    cout << "Missing number is: " << missing << endl;

    return 0;
}
