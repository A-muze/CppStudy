#define Print_

#include <iostream>

using namespace std;

int main() {

    // #define Print_를 선언하고 ifdef Print_로 감싼 부분만 출력된다

    #ifdef Print_
    cout << "Hello World" << endl; // 이것만 출력

    #endif

    #ifdef Print
    cout << "not" << endl;
    #endif

    return 0;

}