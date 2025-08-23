#include <iostream>
using namespace std;

int main() {
    int a[100], n, tmp, i, j;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    i = 0;
    j = n - 1;
    while (i < j) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }

    cout << "After reverse: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
