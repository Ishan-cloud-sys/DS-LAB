#include <iostream>
using namespace std;

#define SIZE 100

int arr[SIZE];
int n = 0;

void createArray() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void displayArray() {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement() {
    if (n >= SIZE) {
        cout << "Array is full. Cannot insert.\n";
        return;
    }

    int pos, value;
    cout << "Enter position to insert (0-indexed): ";
    cin >> pos;
    if (pos < 0 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }

    cout << "Enter value to insert: ";
    cin >> value;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
    cout << "Element inserted.\n";
}

void deleteElement() {
    if (n == 0) {
        cout << "Array is empty. Cannot delete.\n";
        return;
    }

    int pos;
    cout << "Enter position to delete (0-indexed): ";
    cin >> pos;
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!\n";
        return;
    }

    int deleted = arr[pos];
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Deleted element: " << deleted << endl;
}

void linearSearch() {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }

    int key, found = 0;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = 1;
            break;
        }
    }
    if (!found) {
        cout << "Element not found.\n";
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n———MENU———\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createArray(); break;
            case 2: displayArray(); break;
            case 3: insertElement(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: 
                cout << "Exiting program...\n"; 
                return 0;
            default: 
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
