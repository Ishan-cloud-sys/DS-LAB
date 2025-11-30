#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int first = 0, last = n - 1, pos = -1;
    while (first <= last) {
        int mid = (first + last) / 2;
        if (arr[mid] == key) {
            pos = mid;
            break;
        }
        else if (arr[mid] < key) {
            first = mid + 1;
        }
        else {
            last = mid - 1;
        }
    }

    if (pos != -1) {
        cout << "Element found at index " << pos << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}
