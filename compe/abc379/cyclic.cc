#include <iostream>
#include <string>

using namespace std;

int main() {
    string N;
    cin >> N;

    char a = N[0];
    char b = N[1];
    char c = N[2];

    cout << b << c << a << ' ' << c << a << b << endl;
}