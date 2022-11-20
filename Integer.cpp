#include <iostream>

using namespace std;

int main() {

    signed int a = -10;     // signed는 음수와 양수를 모두 포함하고 있다
    cout << a << endl;

    unsigned int b = 10;   // unsigned는 오직 양수의 값만 가질 수 있다
    cout << b << endl;

    // overflow

    signed int value = 2147483647;  // 부호있는 정수의 최대값은 2,147,483,647이다
    cout << value << endl;
    
    value = value + 1;  // // 2,147,483,647에 +1을 하면 
    cout << value << endl;  // ?2,147,483,648가 출력되며 값이 손상된다
    
    return 0;
}