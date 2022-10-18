#include <iostream>

using namespace std;

int method(int a, int b);

int main() {

    cout << method(10, 20) << endl;

    return 0;
}

int method(int a, int b) {
    return a * b;
}

