#include <iostream>
using namespace std;

void H(int);
void e(int);
void l(int);
void o(int);
int main()
{
    int arraystuff[] = {72, 101, 108, 111};
    H(arraystuff[0]);
    e(arraystuff[1]);
    l(arraystuff[2]);
    l(arraystuff[2]);
    e(arraystuff[3]);
    return 0;
}
void H(int i) { cout << static_cast<char>(i); }
void e(int i) { cout << static_cast<char>(i); }
void l(int i) { cout << static_cast<char>(i); }
void o(int i) { cout << static_cast<char>(i); }
