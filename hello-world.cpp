#include <iostream>

using namespace std;

int main() {
    int ascii[] = { 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 33 }; // ASCII values of "Hello World!"
    int size = sizeof(ascii) / sizeof(ascii[0]); // Get the size of the array

    for (int i = 0; i < size; i++) {
        char c = (char)ascii[i]; // Convert ASCII value to character
        cout << c; // Output the character to the console
    }

    return 0;
}