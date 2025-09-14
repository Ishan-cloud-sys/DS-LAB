#include <iostream>
using namespace std;

int main() {
    int m1[10][10], m2[10][10], m3[10][10];
    int r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and cols of first: ";
    cin >> r1 >> c1;
    cout << "Enter rows and cols of second: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Not possible!"<<endl;
        return 0;
    }

    cout << "Matrix1:"<<endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "Matrix2:"<<endl;
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cin >> m2[i][j];
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            m3[i][j] = 0;
            for (k = 0; k < c1; k++) {//as c1 and r2 are same
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Result:"<<endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            cout << m3[i][j] << " ";
        }
        cout << "\n";
    }
}
