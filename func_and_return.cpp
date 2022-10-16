#include <iostream>

using namespace std;

int returnFunc();

int main() {

    cout << returnFunc() << endl;   // 

    return 0;
}

int returnFunc() {  // 정수 값을 반환하는 함수

    return 10;  // 정수 5를 반환
}