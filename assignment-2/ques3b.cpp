#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n (range 1 to n): ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n - 1 << " elements in sorted order: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int first = 0, last = n - 2, ans = n;
    while (first <= last) {
        int mid = (first + last) / 2;
        if (arr[mid] == mid + 1) {
            first = mid + 1;
        }
        else {
            ans = mid + 1;
            last = mid - 1;
        }
    }

    cout << "Missing number is: " << ans << endl;

    return 0;
}
