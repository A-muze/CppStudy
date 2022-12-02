#include <iostream>
#include <cstdint>

/*
    cstdint를 사용하면 자료형의 크기를 명확하게 선언할 수 있다
*/

using namespace std;

int main() {


    // intN_t 으로 정의한다
    int16_t i = -32768;
    cout << i << endl;

    // uintN_t 는 부호 없는 정수이다
    uint16_t j = 65535;
    cout << j << endl;

    return 0;
}