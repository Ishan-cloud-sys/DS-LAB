#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int arr[26] = {0};
    string str;

    cout << "Enter the string you want to make in alphabetical order: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]); 
            arr[ch - 'a']++;
        }
    }

    cout << "Final result: ";
    for (int i = 0; i < 26; i++) {
        while (arr[i] > 0) {
            cout << char(i + 'a');
            arr[i]--;
        }
    }
    cout << endl;

    return 0;
}
