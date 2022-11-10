#include <iostream>

using namespace std;

int main() {

    // 변수 선언
    int a = 10;  // int는 자료형이며 a는 변수의 이름이다
    
    // 중괄호를 사용해서 초기화도 가능하다
    int b = { 10 };
    int c{ 20 };

    cout << "a " << a << endl;
    cout << "b " << b << endl;
    cout << "c " << c << endl;

    return 0;
    
}