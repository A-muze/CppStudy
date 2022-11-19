#include <iostream>

using namespace std;

int main() {

    const char* str = "Byte";    

    cout << "int: " << sizeof(int) << str << endl;
    cout << "char: " << sizeof(char) << str << endl;
    cout << "long: " << sizeof(long) << str << endl;
    cout << "double: " << sizeof(double) << str << endl;
    cout << "float: " << sizeof(float) << str << endl;

    return 0;
}

