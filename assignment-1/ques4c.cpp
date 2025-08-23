#include <iostream>
using namespace std;

int main() {
    int x[10][10], y[10][10];
    int r, c, i, j;

    cout << "Enter rows and cols: ";
    cin >> r >> c;

    cout << "Matrix:"<<endl;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> x[i][j];
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            y[j][i] = x[i][j];
        }
    }

    cout << "Transpose:"<<endl;
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            cout << y[i][j] << " ";
        }
        cout << "\n";
    }
}
